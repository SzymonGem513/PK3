#include <iostream>
#include "head.h"

using namespace std;

int main() {

    Kula kula(2);
    Prostopadloscian prostopadloscian(4,8,2);
    Walec walec(2,30);

    Figura3D *ptr;

    ptr = &kula;
    cout << "Objetosc kuli: " << ptr->objetosc() << endl;
    cout << "Pole kuli: " << ptr->pole() << endl;
    cout << "Stosunek pola do objetosci kuli: " << ptr->stosunek() << endl;

    ptr = &prostopadloscian;
    cout << "Objetosc prostopadloscianu: " << ptr->objetosc() << endl;
    cout << "Pole prostopadloscianu: " << ptr->pole() << endl;
    cout << "Stosunek pola do objetosci prostopadloscianu: " << ptr->stosunek() << endl;

    ptr = &walec;
    cout << "Objetosc prostopadloscianu: " << ptr->objetosc() << endl;
    cout << "Pole prostopadloscianu: " << ptr->pole() << endl;
    cout << "Stosunek pola do objetosci prostopadloscianu: " << ptr->stosunek() << endl;

    return 0;
}