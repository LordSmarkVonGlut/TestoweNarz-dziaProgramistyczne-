#ifndef octdec_hpp
#define octdec_hpp
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;

void octdec()
{
	int liczba;
	string konwert;
	cout<<"Podaj liczbe do konwersji: ";
	cin>>liczba;
	
	
    int decimalNumber = 0; 
	int i = 0;
	int rem;
    while (liczba != 0)
    {
        rem = liczba % 10;
        liczba /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    cout<<"liczba po konwersji to: "<<liczba<<"\n";    //wyœwietla wynik

}

#endif
