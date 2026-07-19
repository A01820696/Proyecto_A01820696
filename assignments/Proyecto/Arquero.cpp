#include "Arquero.hpp"

Arquero::Arquero(string nombre, int vida, int ataque, int nivel, int precision)
    : Unidad(nombre, vida, ataque, nivel) {
    this->precision = precision;
    this->yaRevivio = false;
}

int Arquero::getPrecision() {
    return precision;
}

void Arquero::setPrecision(int precision) {
    this->precision = precision;
}

void Arquero::imprime() {
    cout << "===== ARQUERO =====" << endl;
    Unidad::imprime();
    cout << "Precision: " << precision << "%" << endl;
}

int Arquero::calculaAtaque() {
    int ataqueFinal = Unidad::calculaAtaque();

    if (precision >= 80) {
        ataqueFinal += 15;
    } else if (precision >= 50) {
        ataqueFinal += 8;
    } else {
        ataqueFinal += 3;
    }

    return ataqueFinal;
}

void Arquero::recibeAtaque(int danio) {
    int danioFinal = danio;

    if (precision >= 75) {
        danioFinal = danio - 5;
    }

    if (danioFinal < 1) {
        danioFinal = 1;
    }

    vida -= danioFinal;

    if (vida <= 0) {
        vida = 0;
        revive();
    }

    cout << nombre << " recibio " << danioFinal << " puntos de daño." << endl;
}

void Arquero::revive() {
    if (!yaRevivio && precision >= 90) {
        vida = 15;
        precision -= 30;
        yaRevivio = true;
        cout << nombre << " revivio gracias a su precision." << endl;
    } else {
        cout << nombre << " murio y no pudo revivir." << endl;
    }
}