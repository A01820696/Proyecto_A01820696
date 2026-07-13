#include <iostream>
#include "Unidad.hpp"
#include "Guerrero.hpp"
#include "Arquero.hpp"
#include "Mago.hpp"

using namespace std;

void pelea(Unidad& atacante, Unidad& defensor) {
    cout << "\n" << atacante.getNombre() << " ataca a "
         << defensor.getNombre() << endl;

    int danio = atacante.calculaAtaque();

    cout << "Daño calculado: " << danio << endl;

    defensor.recibeAtaque(danio);

    cout << "Vida restante de " << defensor.getNombre()
         << ": " << defensor.getVida() << endl;
}

int main() {
    Guerrero guerrero("Thor", 120, 20, 3, 8);
    Arquero arquero("Legolas", 90, 18, 2, 85);
    Mago mago("Merlin", 80, 15, 4, 100);

    cout << "===== ESTADO INICIAL =====" << endl;
    guerrero.imprime();
    cout << endl;

    arquero.imprime();
    cout << endl;

    mago.imprime();
    cout << endl;

    cout << "===== COMBATES =====" << endl;

    pelea(guerrero, arquero);
    pelea(arquero, mago);
    pelea(mago, guerrero);
    pelea(guerrero, mago);
    pelea(mago, arquero);

    cout << "\n===== ESTADO FINAL =====" << endl;
    guerrero.imprime();
    cout << endl;

    arquero.imprime();
    cout << endl;

    mago.imprime();

    return 0;
}