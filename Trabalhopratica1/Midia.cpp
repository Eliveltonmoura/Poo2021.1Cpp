#include "midia.h"
using namespace std;

Midia::Midia(const string &artista, const string &titulo, const string &genero) // construtor
{
    this->artista = artista;
    this->titulo = titulo;
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
//void media::setFaixa()/// coleção
//string media::getFaixa()//coleção
void Midia::setGenero(string &genero)
{
    this->genero = genero;
}
string Midia::getGenero()
{
    return genero;
}

//void media::setKeywords(); //coleção
//string media::getKeywords(); //coleção