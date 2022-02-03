#include <iostream>
#include "Midia.h"
using namespace std;
class Cd : public Midia
{
private:
    int duracao;
    float volume;
    bool coletanea;

public:
    Cd(const string &, const string &, vector<string>, int lansamento, const string &, vector<string>,
       int duracao, float volume, bool colt); // costrutor da clsse Cd
    void setDuracao(int duracao);
    int getDuracao();

    void setVolume(float volume);
    float getVolume();

    void setColetanea(bool colt);
    bool getColetanea();
    void print();
};
