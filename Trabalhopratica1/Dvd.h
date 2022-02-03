#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Dvd
{
private:
   vector<string> formatoAudio;
   vector<string> formatoTela;
   vector<string> legenda;

public:
   void setFormatoAudio(string FormatoAudio);
   vector<string> getFormatoAudio();

   void setFormatoTela(string formatoTela);
   vector<string> getFormatoTela();

      void setLegenda(string legenda);
   vector<string> getLegenda();
};
