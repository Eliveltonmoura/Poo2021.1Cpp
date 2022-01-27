#include "Cd.h"

Cd::Cd(const int &duracao, const float &valume, bool colt)
{
    this->duracao = duracao;
    this->valume = valume;
    getColetanea(colt);
}

void Cd::setDuracao(const int &duracao)
{
    this->duracao - duracao;
}
int Cd::getDuracao() const
{
    return duracao;
}

float Cd::setVolume(const float &volume)
{
    this->volume = valume;
}
float Cd::getVolume() const
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