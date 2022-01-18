#include "head.h"
#include <iostream>

using namespace std;

Tekst::Tekst() {
    rozmiar = 0;
    napis = nullptr;
}

Tekst::Tekst(char *napis,  unsigned int rozmiar) {
    this->napis = napis;
    this->rozmiar = rozmiar;
}

Tekst::Tekst(const Tekst & copy){
    this->napis = copy.napis;
    this->rozmiar = copy.rozmiar;
}

Tekst::~Tekst(){}

Tekst & Tekst::operator =( const Tekst & copy){
    this->napis = copy.napis;
    this->rozmiar = copy.rozmiar;
}

int Tekst::operator ==( const Tekst & copy){

    if(this->rozmiar != copy.rozmiar){
        return 0;
    }else{
        for(int i = 0; i < this->rozmiar; i++){
            if(this->napis[i] != copy.napis[i]){
                return 0;
            }
        }
        return 1;
    }

}

void Tekst::operator +( const Tekst & copy){
    char *temp = new char[this->rozmiar + copy.rozmiar];

    for(int i = 0; i < this->rozmiar; i++) {
        temp[i] = this->napis[i];
    }

    for(int i = 0; i < copy.rozmiar; i++) {
        temp[this->rozmiar + i] = copy.napis[i];
    }
    cout<<"Sklejony napis: ";
    for(int i = 0; i < (this->rozmiar + copy.rozmiar); i++) {
        cout << temp[i];
    }

    cout << endl;
}

Tekst & Tekst::operator -(){
    char *temp = new char[this->rozmiar];

    for(int i = 0; i < this->rozmiar; i++){
        temp[i] = this->napis[this->rozmiar - i - 1];
    }

    this->napis = temp;
}

Tekst Tekst::operator ()(unsigned int poczatek, unsigned int odcinek)
{
    char* temp = new char[odcinek];

    for (int i = 0; i < odcinek; i++) {
        temp[i] = this->napis[poczatek + i - 1];
    }

    Tekst nowy(temp, odcinek);
    return nowy;
}


void Tekst::Wypisz() {
    for (int i = 0; i < rozmiar; i++) {
        cout << napis[i];
    }
    cout << endl;
};