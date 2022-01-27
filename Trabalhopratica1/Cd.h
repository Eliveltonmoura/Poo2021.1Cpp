#include <iostream>
#include "Midia.h"

class Cd : public Midia
{
private:
    int duracao;
    float volume;
    bool coletanea;

public:
    Cd(const int &, const float &, bool colt);
    void setDuracao(const &);

    int getDuracao() const;

    float setVolume(const float &);
    float getVolume() const;

    void setColetanea(bool colt);
    bool getColetanea();
};
