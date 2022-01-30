#include "Cd.h"

int main(int argc, char const *argv[])
{

    Cd n = Cd("aa", "ttt", "ggg", 2001, 3, 2.5, true);

    cout << "Teste: " << n.getArtista() << endl;

    return 0;
}
