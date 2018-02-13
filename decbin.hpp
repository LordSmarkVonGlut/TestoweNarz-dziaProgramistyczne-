#ifndef decbin_hpp
#define decbin_hpp
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;

void decbin()//Decymalne na binarne
{    
    int liczba;
    string konwert;
    cout<<"Podaj liczbe do konwersji: ";
    cin>>liczba;
        while(liczba!=0)
        {
            if (liczba%2==1) konwert="1"+konwert;
            if (liczba%2==0) konwert="0"+konwert;
            liczba=liczba/2;
        }
        cout<<"liczba w systemie dwojkowym : "<<konwert<<"\n";    //wyœwietla wynik

}
#endif
