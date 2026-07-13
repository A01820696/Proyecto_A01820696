#include "Unidad.hpp"

Unidad::Unidad(string nombre, int vida, int ataque, int nivel) {
    this->nombre = nombre;
    this->vida = vida;
    this->ataque = ataque;
    this->nivel = nivel;
}

string Unidad::getNombre() {
    return nombre;
}

int Unidad::getVida() {
    return vida;
}

int Unidad::getAtaque() {
    return ataque;
}

int Unidad::getNivel() {
    return nivel;
}

void Unidad::setNombre(string nombre) {
    this->nombre = nombre;
}

void Unidad::setVida(int vida) {
    this->vida = vida;
}

void Unidad::setAtaque(int ataque) {
    this->ataque = ataque;
}

void Unidad::setNivel(int nivel) {
    this->nivel = nivel;
}

void Unidad::imprime() {
    cout << "Nombre: " << nombre << endl;
    cout << "Vida: " << vida << endl;
    cout << "Ataque base: " << ataque << endl;
    cout << "Nivel: " << nivel << endl;
}

int Unidad::calculaAtaque() {
    return ataque + nivel;
}

void Unidad::recibeAtaque(int danio) {
    vida -= danio;

    if (vida < 0) {
        vida = 0;
    }
}

bool Unidad::estaViva() {
    return vida > 0;
}