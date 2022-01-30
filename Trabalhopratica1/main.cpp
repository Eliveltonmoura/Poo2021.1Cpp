#include "Cd.h"

int main(int argc, char const *argv[])
{

    Cd n = Cd("aa", "ttt", 2008, "ggg", 3, 2.5, true);

    cout << "Teste: " << n.getArtista() << endl;

    return 0;
}
