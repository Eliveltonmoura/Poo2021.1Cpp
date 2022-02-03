#include <vector>
#include "Midia.h"
using namespace std;

Midia::Midia(const string &artista, const string &titulo, vector<string> faixas, int lansamento, const string &genero, vector<string> keywords) // construtor de Midia
{
    for (string i : faixas) // faixa
    {
        this->setFaixas(i);
    }

    this->artista = artista;
    this->titulo = titulo;
    setLansamento(lansamento);
    this->genero = genero;

    for (string i : keywords) // faixa
    {
        this->setKeywords(i);
    }
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
void Midia::setFaixas(string faixa)
{
    this->faixas.push_back(faixa);
}
vector<string> Midia::getFaixas()
{
    return this->faixas;
} // coleção

void Midia::setGenero(const string &genero)
{
    this->genero = genero;
}
string Midia::getGenero() const
{
    return genero;
}

void Midia::setKeywords(string keyword)
{

    this->keywords.push_back(keyword);

} // coleção
vector<string> Midia::getKeywords()
{
    return this->keywords;
} // coleção

//------------------------------------------------------------------------------------------------
/*
listFaixa::listFaixa(int cap)
{
    this->tamanho = 0;
    this->capacidade = cap;
    this->faixa = new string[capacidade];
}

listFaixa::~listFaixa()
{
    delete[] this->faixa;
}

void listFaixa::mostraFaixas()
{
    cout << "[";
    for (int i = 0; i < this->tamanho; i++)
    {
        cout << this->faixa[i] << " ";
    }
    cout << "]";
    cout << "\n";
}

void listFaixa::addFaixa(string valor)
{

    if (this->tamanho < this->capacidade)
    {
        this->faixa[this->tamanho] += valor;
        this->tamanho += 1;
    }
}

void listFaixa::removerFaixa(string rfaixa)
{
    for (int i = 0; i < this->tamanho; i++)
    {

        if (rfaixa == faixa[i])
        {
            faixa[i] = "";
        }
    }
}

*/