#include <iostream>

class Cd
{
private:
    int duracao;
    float volume;
    bool coletanea;

public:
    void setDuracao();
    int getDuracao();

    float setVolume();
    float getVolume();

    void setColetanea();
    bool getColetanea();
};
