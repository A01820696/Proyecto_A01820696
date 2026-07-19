#include <iostream>
#include <vector>
#include "Unidad.hpp"
#include "Guerrero.hpp"
#include "Arquero.hpp"
#include "Mago.hpp"

using namespace std;

void pelear(Unidad* atacante, Unidad* defensor) {
    cout << "\n" << atacante->getNombre() << " ataca a "
         << defensor->getNombre() << endl;

    int danio = atacante->calculaAtaque();

    cout << "Daño generado: " << danio << endl;

    defensor->recibeAtaque(danio);

    cout << "Estado del atacado:" << endl;
    cout << *defensor << endl;
}

int main() {
    vector<Unidad*> combatientes;

    combatientes.push_back(new Guerrero("Thor", 120, 20, 3, 8));
    combatientes.push_back(new Arquero("Legolas", 90, 18, 2, 95));
    combatientes.push_back(new Mago("Merlin", 80, 15, 4, 100));

    cout << "===== PERSONAJES INICIALES =====" << endl;

    for (int i = 0; i < combatientes.size(); i++) {
        cout << *combatientes[i] << endl;
    }

    cout << "===== PRUEBA DE COMBATES =====" << endl;

    for (int i = 0; i < combatientes.size(); i++) {
        int siguiente = (i + 1) % combatientes.size();
        pelear(combatientes[i], combatientes[siguiente]);
    }

    cout << "\n===== PRUEBA DE REVIVE =====" << endl;

    combatientes[0]->recibeAtaque(500);
    cout << *combatientes[0] << endl;

    combatientes[1]->recibeAtaque(500);
    cout << *combatientes[1] << endl;

    combatientes[2]->recibeAtaque(500);
    cout << *combatientes[2] << endl;

    cout << "\n===== ESTADO FINAL =====" << endl;

    for (int i = 0; i < combatientes.size(); i++) {
        cout << *combatientes[i] << endl;
    }

    for (int i = 0; i < combatientes.size(); i++) {
        delete combatientes[i];
    }

    return 0;
}