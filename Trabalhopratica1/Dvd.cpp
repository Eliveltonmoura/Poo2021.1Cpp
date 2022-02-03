#include "Dvd.h"
// clsse DVD feita
void Dvd::setFormatoAudio(string faud)
{
    this->formatoAudio.push_back(faud);
}
vector<string> Dvd::getFormatoAudio()
{
    return this->formatoAudio;
}

void Dvd::setFormatoTela(string ftl)
{
    this->formatoTela.push_back(ftl);
}
vector<string> Dvd::getFormatoTela()
{
    return this->formatoTela;
}

void Dvd::setLegenda(string leg)
{
    this->legenda.push_back(leg);
}
vector<string> Dvd::getLegenda()
{
}