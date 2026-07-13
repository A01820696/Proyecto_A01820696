#include "Arquero.hpp"

Arquero::Arquero(string nombre, int vida, int ataque, int nivel, int precision)
    : Unidad(nombre, vida, ataque, nivel) {
    this->precision = precision;
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

    if (vida < 0) {
        vida = 0;
    }

    cout << nombre << " intenta esquivar con su precision. Daño recibido: "
         << danioFinal << endl;
}