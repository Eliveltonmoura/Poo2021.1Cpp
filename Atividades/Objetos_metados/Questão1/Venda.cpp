//Questão1
#include <iostream>
using namespace std;

class Vendas
{
public:
    void setValor(float preca);
    void setPecas(int quantidade);
    float getValor();
    int getPecas();
    void tataliza(Vendas v[], int n);

private:
    float valor;
    int pecas;
};

void Vendas::setValor(float preca)
{
    valor = preca;
}
void Vendas::setPecas(int quantidade)
{
    pecas = quantidade;
}
float Vendas::getValor()
{
    return valor;
}
int Vendas::getPecas()
{
    return pecas;
}
void Vendas::tataliza(Vendas v[], int n)
{
    int i;
    valor = 0;
    pecas = 0;
    for (i = 0; i < n; i++)
    {
        valor += v[i].getValor();
        pecas += v[i].getPecas();
    }
}

int main(int argc, char const *argv[])
{
    Vendas total, v[5];
    v[0].setPecas(1);
    v[1].setPecas(2);
    v[2].setPecas(3);
    v[3].setPecas(4);
    v[4].setPecas(5);
    v[0].setValor(1.0);
    v[1].setValor(2.0);
    v[2].setValor(3.0);
    v[3].setValor(4.0);
    v[4].setValor(5.0);
    total.tataliza(v, 5);
    cout << total.getPecas() << endl
         << total.getValor();
    return 0;
}
