#ifndef PK3_LAB4_POLIMORFIZM_HEAD_H
#define PK3_LAB4_POLIMORFIZM_HEAD_H

#include <string>

using namespace std;

class Figura3D {

public:
    virtual double objetosc() = 0;
    virtual double pole() = 0;
    virtual double stosunek() = 0;
};

class Kula :public Figura3D {
private:
    double r;

public:
    Kula(double radius);
    virtual double objetosc();
    virtual double pole();
    virtual double stosunek();
};

class Prostopadloscian :public Figura3D {
private:
    double a, b, c;

public:
    Prostopadloscian(double a, double b, double c);
    virtual double objetosc();
    virtual double pole();
    virtual double stosunek();
};

class Walec :public Figura3D {
private:
    double r, h;

public:
    Walec(double r, double h);
    virtual double objetosc();
    virtual double pole();
    virtual double stosunek();
};

#endif //PK3_LAB4_POLIMORFIZM_HEAD_H
