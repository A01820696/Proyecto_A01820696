#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Personaje.hpp"

using namespace std;

int main()
{
    srand(time(0));

    Personaje caballero(100, 30, 3);
    Personaje orco(120, 25, 2);

    cout << "Estado inicial:" << endl;
    cout << "Caballero:" << endl;
    caballero.imprimir();

    cout << "Orco:" << endl;
    orco.imprimir();

    cout << "El caballero ataca al orco." << endl;
    caballero.atacar(orco);

    cout << "Estado despues del ataque:" << endl;
    cout << "Caballero:" << endl;
    caballero.imprimir();

    cout << "Orco:" << endl;
    orco.imprimir();

    return 0;
}