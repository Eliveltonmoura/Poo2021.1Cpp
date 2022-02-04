#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
#include <utility>
#include <string>
#include <vector>
#include "Cd.h"
#include "Dvd.h"
using namespace std;
bool compara_lancamento(Midia i, Midia j)
{
    return i.getLansamento() > j.getLansamento();
}
vector<Cd> artistas(vector<Cd> cd, string artista)
{
    vector<Cd> resposta;

    for (Cd i : cd)
    {
        if (i.getArtista() == artista)
        {
            resposta.push_back(i);
        }
    }
    sort(resposta.begin(), resposta.end(), compara_lancamento);
    return resposta;
}

int main()
{

    // vector<Cd> c = Cd("Artista", "titulo", "faixa", 2222, "genero", "000", 2, 3.3);

    return 0;
}
