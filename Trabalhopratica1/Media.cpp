#include "media.h"
using namespace std;

Media::Media(const string &artista, const string &titulo, const string &genero) // construtor
{
    this->artista = artista;
    this->titulo = titulo;
    this->genero = genero;
}
// Gettes e Settes responsaveis por pegar dados salvos e salva dados nas variaveis que estão privadas
void Media::setArtista(const string &artista)
{
    this->artista = artista;
}
string Media::getArtista() const
{
    return artista;
}
void Media::setTitulo(const string &titulo)
{
    this->titulo = titulo;
}
string Media::getTitulo() const
{
    return titulo;
}
//void media::setFaixa()/// coleção
//string media::getFaixa()//coleção
void Media::setGenero(string &genero)
{
    this->genero = genero;
}
string Media::getGenero()
{
    return genero;
}

//void media::setKeywords(); //coleção
//string media::getKeywords(); //coleção