#ifndef MAGO_HPP
#define MAGO_HPP

#include "Unidad.hpp"

class Mago : public Unidad {
private:
    int mana;

public:
    Mago(string nombre, int vida, int ataque, int nivel, int mana);

    int getMana();
    void setMana(int mana);

    void imprime() override;
    int calculaAtaque() override;
    void recibeAtaque(int danio) override;
};

#endif