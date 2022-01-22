#include <iostream>
#include "head.h"

using namespace std;

int main() {

    Kula kula(4);
    Prostopadloscian prostopadloscian(4,8,2);

    Figura3D *wsk;

    wsk = &kula;
    wsk->objetosc();
    wsk->pole();
    wsk->stosunek();

    wsk = &prostopadloscian;
    wsk -> objetosc();
    wsk->pole();
    wsk->stosunek();

    return 0;

}