#include <iostream>
using namespace std;

int main()
{
	int broj;
	int parni = 0;
	int zbroj = 0;
	int neparni = 0;
	int ukupno = 0;
	do
	{
		cout<<"Unesi broj izmedu 1 i 100, ili 0 za zavrsetak programa: "<<endl;
		cin>>broj;
		if(broj > 100)
		{
			cout<<"Uneseni broj je veci od 100, pokusajte ponovno."<<endl;
		}
		else
		{
			ukupno++;
		    zbroj = zbroj + broj;
		    if(broj%2 == 0)
		    {
			    parni++;
		    }
		    else
		    {
			neparni++;
		    }
		}
	
	}while(broj != 0);
	cout<<"Ukupno je uneseno "<<ukupno<<" brojeva."<<endl;
	cout<<"Zbroj svih brojeva je: "<<zbroj<<", ukupno je uneseno "<<parni<<" parna broja i "<<neparni<<" neparna broja."<<endl;
	system("PAUSE");
	return 0;
}
