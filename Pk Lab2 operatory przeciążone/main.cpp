#include <iostream>
#include "head.h"
#include <string>

using namespace std;

int main() {

    char napis1[6] = {'N','a','p','i','s','1'};
    Tekst tekst1(napis1,6);

    char napis1kopia[6] = {'N','a','p','i','s','1'};
    Tekst tekst1Kopia(napis1kopia,6);

    char napis2[7] = {'N','a','p','i','s','2','3'};
    Tekst tekst2(napis2,7);

    char napis3[6] = {'x','x','x','x','x','x'};
    Tekst tekst3(napis3,6);

    cout<<"--Przykladowe teksty: "<<endl;

    tekst1.Wypisz();
    tekst1Kopia.Wypisz();
    tekst2.Wypisz();
    tekst3.Wypisz();

    cout<<"--Sklejanie tekstow:"<<endl;
    tekst3+tekst1;
    tekst1+tekst2;

    cout<<"--Porownywanie dwoch tekstow:"<<endl;

    string wynik1 = (tekst1==tekst1Kopia) ? "Teksty sa identyczne." : "Teksty roznia sie od siebie.";
    cout << wynik1 << endl;

    string wynik2 = (tekst1==tekst3) ? "Teksty sa identyczne." : "Teksty roznia sie od siebie.";
    cout << wynik2 << endl;

    cout<<"--Przypisywanie dwoch tekstow:"<<endl;
    cout<<"tekst1: ";
    tekst1.Wypisz();

    cout<<"tekst3: ";
    tekst3.Wypisz();

    tekst1 = tekst3;

    cout<<"Po przypisaniu do teskt1 tekst3:"<<endl;
    cout<<"tekst1: ";
    tekst1.Wypisz();

    cout<<"--Odwrocenie tekst1"<<endl;
    tekst2.Wypisz();
    -tekst2;
    tekst2.Wypisz();

    cout<<"--Podciag od 3 miejsca 2 znaki"<<endl;
    tekst1Kopia.Wypisz();
    tekst1Kopia(3,2).Wypisz();


    return 0;

}
