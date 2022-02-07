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
vector<Cd> getCdEscritor(vector<Cd> cd, string artista)
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

vector<Dvd> getDvdEscritor(vector<Dvd> Dvd, string artistas)
{
    vector<Dvd> resposta;

    for (Dvd i : Dvd)
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

vector<Midia> getMidiaEscritor(vector<Midia> Midia, string artistas)
{
    vector<Midia> resposta;

    for (Midia i : Midia)
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
/*vector<Midia> getMidiaAno(vector<Cd>, vector<Dvd> int lansamentos)
{
    vector<Midia> resposta;

    for (Cd i : Cd)
    {
        if (i.getLansamento == lansamentos)
        {
            resposta.push_back(i);
        }
    }

    for (Dvd i : Dvd)
    {
        if (i.getLansamento == lansamentos)
        {
            resposta.push_back(i);
        }
    }

    sort(resposta.begin(), resposta.end(), compara_titulos);

    return resposta;
}*/
