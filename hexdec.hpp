#ifndef hexdec_hpp
#define hexdec_hpp
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;

void hexdec()//Heksalne an decymalne 
{
    string hex;
    cout<<"Podaj liczbe w systemie szesnastkowym: ";
    cin>>hex;
    double suma=0;
    double licznik1,licznik2,i=0;
    licznik1=licznik2=hex.length()-1;
    for(i=0;i<=licznik1;i++)
                        if (hex[i]=='a') suma=suma+(10*pow(16, licznik2--));
                        else
                        if (hex[i]=='b') suma=suma+(11*pow(16, licznik2--));
                        else
                        if (hex[i]=='c') suma=suma+(12*pow(16, licznik2--));
                        else
                        if (hex[i]=='d') suma=suma+(13*pow(16, licznik2--));
                        else
                        if (hex[i]=='e') suma=suma+(14*pow(16, licznik2--));
                        else
                        if (hex[i]=='f') suma=suma+(15*pow(16, licznik2--));
                        else
                        suma=suma+hex[i]*pow(16, licznik2--);
            licznik2--;
    cout<<"liczba w systemie dziesiatkowym to: "<<suma<<endl;
}
#endif
