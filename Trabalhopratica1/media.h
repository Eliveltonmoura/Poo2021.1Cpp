#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// criação da classe
class media
{
private: // atributos privados que vão ser a acessados via gettes e settes
    string artista;
    string titulo;
    string faixa; // coleção
    string genero;
    string keywords; // coleção

public: // metados para fazer a açoes requeridas todos publicos
    void setArtista(string &);
    string getArtista();
    void setTitulo(string &);
    string getTitulo(string &);
    void setFaixa();   /// coleção
    string getFaixa(); //coleção
    void setGenero(string &);
    string getGenero();
    void setKeywords();   //coleção
    string getKeywords(); //coleção
};
