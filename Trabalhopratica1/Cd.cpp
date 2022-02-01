#include <iostream>
#include <string>
#include "Cd.h"
using namespace std;

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

void Cd::print()
{
    // f.mostraFaixas();

    cout << "Artista: " << getArtista() << "\n"
         << "Titulo: " << getTitulo() << "\n"
         << "lancamento: " << getLansamento() << "\n"
         << "Genero: " << getGenero() << "\n"
         << "Duracao: " << getDuracao() << "\n"
         << "Volume: " << getVolume() << "\n"
         << "---------------------------------------------------------"
         << endl;
}

//--------------------------------------------------------------------------------------------------------------
