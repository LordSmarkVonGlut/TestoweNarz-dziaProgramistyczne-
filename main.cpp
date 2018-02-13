#include <iostream>
#include <cstdlib>
#include <math.h>
#include <sstream>
#include "decbin.hpp"
#include "bindec.hpp"
#include "hexdec.hpp"
#include "dechex.hpp"
#include "decoct.hpp"
#include "octdec.hpp"


using namespace std;

int main()
{
string konwert;
char menu;
    cout<<"Wybierz operacje:\n 1 binarny na decymalny\n 2 decymalny na binarny\n 3 heksadedymalny na decymalny\n 4 decymalny na heksadecymalny \n 5 oktalny na decymalny \n 6 decymalny na oktalny";
    cout<<endl<<"wybieram: ";
    cin>>menu;    
switch (menu)
{
	case '1': 
	{
	bindec();
	break;
	}
	case '2':
	{
	decbin();
	break;
	}
	case '3':
	{
	hexdec();
	break;
	}
	case '4':
	{
	dechex();
	break;
	}	
	case '5':
	{
	decoct();
	break;
	}
	case '6':
	{
	decoct();
	break;
	}
	default: cout<<"nic nie wybrales\n";
	break;
	}

system("pause");
}
