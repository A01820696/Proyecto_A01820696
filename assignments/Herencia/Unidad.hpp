#ifndef UNIDAD_HPP
#define UNIDAD_HPP

#include <iostream>
#include <string>

using namespace std;

class Unidad {
protected:
    string nombre;
    int vida;
    int ataque;
    int nivel;

public:
    Unidad(string nombre, int vida, int ataque, int nivel);

    string getNombre();
    int getVida();
    int getAtaque();
    int getNivel();

    void setNombre(string nombre);
    void setVida(int vida);
    void setAtaque(int ataque);
    void setNivel(int nivel);

    virtual void imprime();
    virtual int calculaAtaque();
    virtual void recibeAtaque(int danio);

    bool estaViva();
};

#endif