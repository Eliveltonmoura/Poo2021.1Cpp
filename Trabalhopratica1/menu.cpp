#include "menu.h"
#include "Cd.h"

void menu()
{
    bool fasa = true;
    int op;
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