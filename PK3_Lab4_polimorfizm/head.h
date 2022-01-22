#ifndef PK3_LAB4_POLIMORFIZM_HEAD_H
#define PK3_LAB4_POLIMORFIZM_HEAD_H

#include <string>

using namespace std;

class Figura3D {

public:
    virtual double objetosc();
    virtual double pole();
    virtual double stosunek();
};

class Kula :public Figura3D {
private:
    double r;

public:
    Kula(int x);
    virtual double objetosc();
    virtual double pole();
    virtual double stosunek();
};

class Prostopadloscian :public Figura3D {
    double a, b, c;

public:
    Prostopadloscian(double x, double y, double z);
    virtual double objetosc();
    virtual double pole();
    virtual double stosunek();
};

#endif //PK3_LAB4_POLIMORFIZM_HEAD_H
