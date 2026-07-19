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
    virtual ~Unidad();

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

    // Método virtual puro
    virtual void revive() = 0;

    bool estaViva();

    // Sobrecarga del operador <<
    friend ostream& operator<<(ostream& os, Unidad& unidad);
};

#endif