#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
#include <utility>
#include <string>
#include <vector>
#include "Cd.h"
#include "Dvd.h"
#include "Midia.h"
#include "drive.h"

bool compara_lancamento(Midia i, Midia j)
{
    return i.getLansamento() > j.getLansamento();
}

bool compara_titulos(Midia i, Midia j)
{
    return i.getTitulo() > j.getTitulo();
}
// primeira questão
vector<Cd> artista(vector<Cd> cd, string artista)
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

// segunda questão

vector<Cd> artista(vector<Dvd> Dvd, string artistas)
{
    vector<Cd> resposta;

    for (Dvd i : Dvd)
    {
        if (i.getArtista() == artistas)
        {
            resposta.push_back(i);
        }
    }
    sort(resposta.begin(), resposta.end(), compara_titulos);

    return resposta;
}

// Terceira questão