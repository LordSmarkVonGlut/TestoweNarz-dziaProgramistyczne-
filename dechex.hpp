#ifndef dechex_hpp
#define dechex_hpp
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;

void dechex()//decymalne na hexalne
{
	int liczba;
	string konwert;
	cout<<"Podaj liczbe do konwersji: ";
	cin>>liczba;
    cout<<"liczba w systemie szesnastkowym to: "<<hex<<liczba <<"\n";    //wyœwietla wynik
}
#endif
