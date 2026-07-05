#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Personaje.hpp"

using namespace std;

int main()
{
    srand(time(0));

    Personaje IronMan (100, 30, 3);
    Personaje Thanos(120, 25, 2);

    cout << "Estado inicial:" << endl;
    cout << "IronMan:" << endl;
    IronMan.imprimir();

    cout << "Thanos:" << endl;
    Thanos.imprimir();

    cout << "IronMan ataca a Thanos." << endl;
    IronMan.atacar(Thanos);

    cout << "Estado despues del ataque:" << endl;
    cout << "IronMan:" << endl;
    IronMan.imprimir();

    cout << "Thanos:" << endl;
    Thanos.imprimir();

    return 0;
}