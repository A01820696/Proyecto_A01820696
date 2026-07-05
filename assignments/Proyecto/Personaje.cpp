//GEnera la implementación de la clase base Personaje

#include "Personaje.hpp"
#include <iostream>
#include <cstdlib>

using namespace std;

Personaje::Personaje()
{
    vida = 100;
    salud = 100;
    ataque = 20;
    nivel = 1;
}

Personaje::Personaje(int v, int a, int n)
{
    vida = v;
    salud = v;
    ataque = a;
    nivel = n;
}

int Personaje::getVida()
{
    return vida;
}

int Personaje::getSalud()
{
    return salud;
}

int Personaje::getAtaque()
{
    return ataque;
}

int Personaje::getNivel()
{
    return nivel;
}

void Personaje::setVida(int v)
{
    vida = v;
}

void Personaje::setSalud(int s)
{
    salud = s;
}

void Personaje::setAtaque(int a)
{
    ataque = a;
}

void Personaje::setNivel(int n)
{
    nivel = n;
}

int Personaje::porcentajeSalud()
{
    return (salud * 100) / vida;
}

void Personaje::imprimeBarra()
{
    int porcentaje = porcentajeSalud();
    int llenos = porcentaje / 5;

    for (int i = 0; i < llenos; i++)
    {
        cout << "%";
    }

    for (int i = llenos; i < 20; i++)
    {
        cout << "=";
    }

    cout << endl;
}

int Personaje::calculaAtaque(Personaje& objetivo)
{
    int puntos;

    if (objetivo.getNivel() > nivel)
    {
        puntos = 1 + rand() % (ataque / 2);
    }
    else
    {
        puntos = (ataque / 2) + rand() % ((ataque / 2) + 1);
    }

    return puntos;
}

void Personaje::recibeAtaque(int ptosAtaque)
{
    salud = salud - ptosAtaque;

    if (salud < 0)
    {
        salud = 0;
    }
}

void Personaje::atacar(Personaje& objetivo)
{
    int puntos = calculaAtaque(objetivo);
    objetivo.recibeAtaque(puntos);
}

void Personaje::imprimir()
{
    cout << "Vida maxima: " << vida << endl;
    cout << "Salud actual: " << salud << endl;
    cout << "Ataque: " << ataque << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "Barra de vida: ";
    imprimeBarra();
    cout << endl;
}