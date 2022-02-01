#include "menu.h" // chamada da intefase menu;
#include "Cd.h"   // chamada da intefase Cd;

void menu()
{
    bool fasa = true;
    int op;
    // criação do objeto Cd
    Cd n = Cd("Elivelton", "Um Amor", 2008, "Romance", 3, 2.5, true);

    do
    {
        cout << "------------------------- Menu---------------------------\n"
             << "1.Busca\n"
             << "2.Mostra Faixas\n"
             << "3.Cadastra \n"
             << "\n";
        cout << " Digite uma opcao: ";
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "nada aqui";

            break;
        case 2:
            cout << "-------------------------Faixas--------------------------\n";
            n.print();

            break;

        default:
            break;
        }

    } while (fasa != false);
}