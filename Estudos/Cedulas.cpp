#include <iostream>

using namespace std;
int main()
{

  int n100 = {0}, n50 = {0}, n20 = {0}, n10 = {0}, n5 = {0}, n2 = {0}, n1 = {0}, valor,
      r100 = {0}, r50 = {0}, r20 = {0}, r10 = {0}, r5 = {0}, r2 = {0}, r1 = {0};

  cin >> valor;

  n100 = valor / 100;
  r100 = valor % 100;

  n50 = r100 / 50;
  r50 = r100 % 50;

  n20 = r50 / 20;
  r20 = r50 % 20;

  n10 = r20 / 10;
  r10 = r20 % 10;

  n5 = r10 / 5;
  r5 = r10 % 5;

  n2 = r5 / 2;
  r2 = r5 % 2;

  n1 = r2 / 1;
  r1 = r2 % 1;

  cout << valor << endl;
  cout << n100 << " notas (s) de R$ 100,00" << endl;
  cout << n50 << " notas (s) de R$ 50,00" << endl;
  cout << n20 << " notas (s) de R$ 20,00" << endl;
  cout << n10 << " notas (s) de R$ 10,00" << endl;
  cout << n5 << " notas (s) de R$ 5,00" << endl;
  cout << n2 << " notas (s) de R$ 2,00" << endl;
  cout << n1 << " notas (s) de R$ 1,00" << endl;

  return 0;
  
}
