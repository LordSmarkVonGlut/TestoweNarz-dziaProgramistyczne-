#ifndef bindec_hpp
#define bindec_hpp
#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
using namespace std;

void bindec()//Binarne na decymalne
{
	string bin;
	double licznik1,licznik2,i=0;
	double dec=0;
    cout<<"podaj liczbe w systemie dwojkowym : ";
    cin>>bin;
    licznik1=licznik2=bin.length()-1;
    for(i=0;i<=licznik1;i++) 
    if(bin[i]=='1')dec=dec+pow(2,licznik2--);
    else licznik2--;
    cout<<"liczba w systemie dziesietnym : "<<dec<<endl;
}
#endif
