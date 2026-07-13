#ifndef GUERRERO_HPP
#define GUERRERO_HPP

#include "Unidad.hpp"

class Guerrero : public Unidad {
private:
    int fuerza;

public:
    Guerrero(string nombre, int vida, int ataque, int nivel, int fuerza);

    int getFuerza();
    void setFuerza(int fuerza);

    void imprime() override;
    int calculaAtaque() override;
    void recibeAtaque(int danio) override;
};

#endif