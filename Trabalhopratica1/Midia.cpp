#include "Midia.h"
using namespace std;

Midia::Midia(const string &artista, const string &titulo, int lansamento, const string &genero) // construtor de Midia
{
    this->artista = artista;
    this->titulo = titulo;
    setLansamento(lansamento);
    this->genero = genero;
}

/* Os Setters são responsaveis por enserir valores nas variaveis privadas
já os getters são reposponsaveis por pegar os dados salvos da variaveis privadas*/
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
/// coleção
/*void media::setFaixa(string valor)
{
    int tamanho = 0;

    if (this->tamanho < this->capacidade)
    {
        this->faixas[this->tamanho] = valor;
        this->tamanho += 1;
    }
}*/
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