// Crear el archivo header de la clase Personaje, no olvides las guardas o el pragma.

#pragma once

class Personaje
{
private:
    int vida;
    int salud;
    int ataque;
    int nivel;

public:
    Personaje();
    Personaje(int vida, int ataque, int nivel);

    int getVida();
    int getSalud();
    int getAtaque();
    int getNivel();

    void setVida(int vida);
    void setSalud(int salud);
    void setAtaque(int ataque);
    void setNivel(int nivel);

    int porcentajeSalud();
    void imprimeBarra();
    int calculaAtaque(Personaje& objetivo);
    void recibeAtaque(int ptosAtaque);
    void atacar(Personaje& objetivo);
    void imprimir();
};