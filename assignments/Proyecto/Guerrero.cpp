#include "Guerrero.hpp"

Guerrero::Guerrero(string nombre, int vida, int ataque, int nivel, int fuerza)
    : Unidad(nombre, vida, ataque, nivel) {
    this->fuerza = fuerza;
    this->yaRevivio = false;
}

int Guerrero::getFuerza() {
    return fuerza;
}

void Guerrero::setFuerza(int fuerza) {
    this->fuerza = fuerza;
}

void Guerrero::imprime() {
    cout << "===== GUERRERO =====" << endl;
    Unidad::imprime();
    cout << "Fuerza: " << fuerza << endl;
}

int Guerrero::calculaAtaque() {
    return Unidad::calculaAtaque() + fuerza * 2;
}

void Guerrero::recibeAtaque(int danio) {
    int danioReducido = danio - fuerza;

    if (danioReducido < 1) {
        danioReducido = 1;
    }

    vida -= danioReducido;

    if (vida <= 0) {
        vida = 0;
        revive();
    }

    cout << nombre << " recibio " << danioReducido << " puntos de daño." << endl;
}

void Guerrero::revive() {
    if (!yaRevivio && fuerza >= 8) {
        vida = 20;
        fuerza -= 4;
        yaRevivio = true;
        cout << nombre << " revivio gracias a su fuerza de guerrero." << endl;
    } else {
        cout << nombre << " murio y no pudo revivir." << endl;
    }
}