#include "head.h"
#include <iostream>

using namespace std;

const double pi = 3.14;

Kula::Kula(int x): r(x) {}

double Kula::objetosc() {
     return (4/3) * pi * (r * r * r);
}

double Kula::pole() {
   return 4 * pi * (r * r);
}

double Kula::stosunek() {
   return (this->pole() / this->objetosc());
}

Prostopadloscian::Prostopadloscian(double x, double y, double z):a(x),b(y),c(z) {}

double Prostopadloscian::objetosc() {
   return a * b * c;
}

double Prostopadloscian::pole() {

    return (2*a*b) + (2*a*c) + (2*b*c);
}

double Prostopadloscian::stosunek() {
    return (this->pole() / this->objetosc());
}