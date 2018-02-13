#ifndef decoct_hpp
#define decoct_hpp
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;

void decoct()
{
	int liczba;
	string konwert;
	cout<<"Podaj liczbe do konwersji: ";
	cin>>liczba;
	
    int rem; 
	int i = 1;
	int octalNumber = 0;
    while (liczba != 0)
    {
        rem = liczba % 8;
        liczba /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    cout<<"liczba w systemie ósemkowym to: "<<octalNumber <<"\n";    //wyœwietla wynik

}
#endif
