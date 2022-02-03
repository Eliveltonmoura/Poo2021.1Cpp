#include <iostream> // bibliotecas
#include <string>
#include <iomanip>
#include <vector>

using namespace std;
// criação da classe
class Midia
{
private: // atributos privados que vão ser a acessados via gettes e settes
    string artista = {};
    string titulo = {};
    int lansamento = {};
    vector<string> faixas;
    string genero = {};
    vector<string> keywords; // coleção

public: // metados para fazer a açoes requeridas todos publicos
    // listFaixa f = listFaixa(10);
    Midia(const string &, const string &, vector<string>, int lansamento, const string &, vector<string>);

    void setArtista(const string &);
    string getArtista() const;
    void setTitulo(const string &);
    string getTitulo() const;
    void setLansamento(int lansamento);
    int getLansamento();

    void setFaixas(string faixa); /// coleção
    vector<string> getFaixas();   // coleção
    void setGenero(const string &);
    string getGenero() const;
    void setKeywords(string keywords); // coleção
    vector<string> getKeywords();      // coleção
};
////-------------------------------------------------------------------------------------------------------------
