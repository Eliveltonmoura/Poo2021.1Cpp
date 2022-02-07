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
vector<Cd> getCdEscritor(vector<Cd> cd, string artistas)
{
    vector<Cd> resposta;

    for (Cd i : cd)
    {
        if (i.getArtista() == artistas)
        {
            resposta.push_back(i);
        }
    }
    sort(resposta.begin(), resposta.end(), compara_lancamento);

    return resposta;
}

// segunda questão

vector<Dvd> getDvdEscritor(vector<Dvd> dvd, string artistas)
{
    vector<Dvd> resposta;

    for (Dvd i : dvd)
    {
        if (i.getArtista() == artistas)
        {
            resposta.push_back(i);
        }
    }
    sort(resposta.begin(), resposta.end(), compara_lancamento);

    return resposta;
}

// Terceira questão

vector<Midia> getMidiaEscritor(vector<Midia> midia, string artistas)
{
    vector<Midia> resposta;

    for (Midia i : midia)
    {
        if (i.getArtista() == artistas)
        {
            resposta.push_back(i);
        }
    }
    sort(resposta.begin(), resposta.end(), compara_lancamento);

    return resposta;
}

// Quarta questão
vector<Midia> getMidiaAno(vector<Cd> cd, vector<Dvd> dvd, int lansamento)
{
    vector<Midia> resposta;

    for (Cd i : cd)
    {
        if (i.getLansamento() == lansamento)
        {
            resposta.push_back(i);
        }
    }

    for (Dvd j : dvd)
    {
        if (j.getLansamento() == lansamento)
        {
            resposta.push_back(j);
        }
    }

    sort(resposta.begin(), resposta.end(), compara_titulos);

    return resposta;
}
