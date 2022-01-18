#ifndef OPERATORY_LAB2PK3_HEAD_H
#define OPERATORY_LAB2PK3_HEAD_H
class Tekst {

private:
    unsigned int rozmiar;
    char *napis;

public:
    void Wypisz();

    Tekst & operator =( const Tekst & copy);

    int operator ==( const Tekst & copy);
    void operator +( const Tekst & copy);
    Tekst & operator -();
    Tekst operator ()(unsigned int poczatek, unsigned int rozmiar);

    Tekst();
    Tekst(char *napis,  unsigned int rozmiar);
    Tekst(const Tekst & obj);
    ~Tekst();
};

#endif
