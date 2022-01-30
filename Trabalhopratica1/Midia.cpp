#include "Midia.h"
using namespace std;

Midia::Midia(const string &artista, const string &titulo, int lansamento, const string &genero) // construtor
{
    this->artista = artista;
    this->titulo = titulo;
    setLansamento(lansamento);
    this->genero = genero;
}
// Gettes e Settes responsaveis por pegar dados salvos e salva dados nas variaveis que estão privadas
void Midia::setArtista(const string &artista)
{
    this->artista = artista;
}
string Midia::getArtista() const
{
    return artista;
}
void Midia::setTitulo(const string &titulo)
{
    this->titulo = titulo;
}
string Midia::getTitulo() const
{
    return titulo;
}
void Midia::setLansamento(int lansamento)
{
    this->lansamento = lansamento;
}
int Midia::getLansamento()
{
    return lansamento;
}

// void media::setFaixa()/// coleção
// string media::getFaixa()//coleção
void Midia::setGenero(const string &genero)
{
    this->genero = genero;
}
string Midia::getGenero() const
{
    return genero;
}

// void media::setKeywords(); //coleção
// string media::getKeywords(); //coleção