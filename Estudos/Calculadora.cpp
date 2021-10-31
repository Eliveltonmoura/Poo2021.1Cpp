#include<iostream>
using namespace std;

int main(){
    int sub = {0}, soma = {0}, a = {0}, b = {0};
    float mult = {0};
    char op;
    cout << "Escolha a operacao" << endl;
    cin >> op;
    cout << " valor A: ";
    cin >> a;
    cout << " valor B: ";
    cin >> b;
     switch (op)
     {
     case '+':
      cout <<" O resutado e: "<< a+b << endl;
         break;
    case '-':
      cout <<" O resutado e: "<< a-b << endl;
         break;
    case '*':
      cout <<" O resutado e: "<< a*b << endl;
         break;
    case '/':
      cout <<" O resutado e: "<< a/b << endl;
         break;
     
     default:
         break;
    }
   
    //system("pause");
    return 0;

 }