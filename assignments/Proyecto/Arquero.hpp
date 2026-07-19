#ifndef ARQUERO_HPP
#define ARQUERO_HPP

#include "Unidad.hpp"

class Arquero : public Unidad {
private:
    int precision;
    bool yaRevivio;

public:
    Arquero(string nombre, int vida, int ataque, int nivel, int precision);

    int getPrecision();
    void setPrecision(int precision);

    void imprime() override;
    int calculaAtaque() override;
    void recibeAtaque(int danio) override;
    void revive() override;
};

#endif