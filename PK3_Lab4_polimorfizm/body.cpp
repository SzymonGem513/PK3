#include "head.h"
#include <iostream>

using namespace std;

const double pi = 3.14;

double Figura3D::stosunek() {
        return this->pole() / this->objetosc();
}

Kula::Kula(double radius): r(radius) {}

double Kula::objetosc() {
     return (4/3) * pi * (r * r * r);
}

double Kula::pole() {
   return 4 * pi * (r * r);
}

Prostopadloscian::Prostopadloscian(double a, double b, double c):a(a),b(b),c(c) {}

double Prostopadloscian::objetosc() {
   return a * b * c;
}

double Prostopadloscian::pole() {
    return (2*a*b) + (2*a*c) + (2*b*c);
}

Walec::Walec(double r, double h): r(r), h(h) {}

double Walec::objetosc() {
    return this->polePodstawy() * h;
}

double Walec::polePodstawy() {
    return pi * (r * r);
}

double Walec::poleBoczne() {
    return 2 * pi * r * h;
}

double Walec::pole() {
    return (2 * this->polePodstawy()) + this->poleBoczne();
}