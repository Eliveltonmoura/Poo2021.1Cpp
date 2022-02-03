#include <iostream>
#include <algorithm>
#include <map>
#include <iterator>
#include <utility>
#include <string>
#include <vector>
#include "Cd.h"
#include <Midia.h>
#include "list"
#include "menu.h"
#include "Dvd.h"
using namespace std;

int main()
{

    /// clamada da função menu
    // menu();

    bool compara_lancamento(Midia i, Midia j)
    {

        return i.getLansamento() > j.getLansamento();
    }

    vector<Cd> a(vector<Cd> cd, string artista)
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

    return 0;
}
