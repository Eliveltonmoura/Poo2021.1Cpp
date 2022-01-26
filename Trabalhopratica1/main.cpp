#include "media.h"

int main(int argc, char const *argv[])
{

    Media n = Media("elivelton", "eu", "cc");

    n.setArtista("Maria");

    cout << n.getArtista() << endl;

    return 0;
}
