#include "DrivesFucao.h"

// primeira questão

bool DrivesFucao::compara_lancamento(Midia i, Midia j)
{
    return i.getLansamento() > j.getLansamento();
}

vector<Cd> DrivesFucao::artistas(vector<Cd> cd, string artista)
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
