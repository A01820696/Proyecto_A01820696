#include "Mago.hpp"

Mago::Mago(string nombre, int vida, int ataque, int nivel, int mana)
    : Unidad(nombre, vida, ataque, nivel) {
    this->mana = mana;
}

int Mago::getMana() {
    return mana;
}

void Mago::setMana(int mana) {
    this->mana = mana;
}

void Mago::imprime() {
    cout << "===== MAGO =====" << endl;
    Unidad::imprime();
    cout << "Mana: " << mana << endl;
}

int Mago::calculaAtaque() {
    int ataqueFinal = Unidad::calculaAtaque();

    if (mana >= 20) {
        ataqueFinal += 20;
        mana -= 20;
    } else if (mana > 0) {
        ataqueFinal += 8;
        mana = 0;
    }

    return ataqueFinal;
}

void Mago::recibeAtaque(int danio) {
    int danioFinal = danio;

    if (mana >= 30) {
        danioFinal = danio / 2;
        mana -= 30;
    }

    if (danioFinal < 1) {
        danioFinal = 1;
    }

    vida -= danioFinal;

    if (vida < 0) {
        vida = 0;
    }

    cout << nombre << " uso mana para protegerse. Daño recibido: "
         << danioFinal << endl;
}