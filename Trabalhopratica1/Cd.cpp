#include <iostream>
#include "Cd.h"
//#include "Midia.h"

Cd::Cd(const string &artista, const string &titulo, int lansamento, const string &genero,
       int duracao, float valume, bool colt)
    : Midia(artista, titulo, lansamento, genero) // herança
{
    this->duracao = duracao;
    this->volume = valume;
    setColetanea(colt);
}

void Cd::setDuracao(int duracao)
{
    this->duracao = duracao;
}
int Cd::getDuracao()
{
    return duracao;
}

void Cd::setVolume(float volume)
{
    this->volume = volume;
}
float Cd::getVolume()
{
    return volume;
}

void Cd::setColetanea(bool colt)
{
    this->coletanea = colt;
}
bool Cd::getColetanea()
{
    return coletanea;
}