#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
// criação da classe
class Midia
{
private: // atributos privados que vão ser a acessados via gettes e settes
    string artista = {};
    string titulo = {};
    int lansamento = {};
    // list<string> faixa;
    string genero = {};
    // string keywords; // coleção

public: // metados para fazer a açoes requeridas todos publicos
    Midia(const string &, const string &, int lansamento, const string &);

    void setArtista(const string &);
    string getArtista() const;
    void setTitulo(const string &);
    string getTitulo() const;
    void setLansamento(int lansamento);
    int getLansamento();

    //  void setFaixa(string &); /// coleção
    //  string getFaixa();       //coleção
    void setGenero(const string &);
    string getGenero() const;
    //  void setKeywords(string &); //coleção
    // string getKeywords();       //coleção
};
