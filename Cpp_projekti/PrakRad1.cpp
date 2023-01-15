#include <iostream>
using namespace std;

int main()
{
	int broj, neparni = 0, veci = 0;
	do
	{
		cout<<"Unesi broj (10 za zavrsetak programa): ";
		cin>>broj;
		if(broj %2 != 0)
		{
			neparni++;
		}
		if(broj > 10)
		{
			veci++;
		}

	}while(broj != 10);
	cout<<"Uneseno je "<<neparni<<" neparnih brojeva."<<endl;
	cout<<"Uneseno je "<<veci<<" brojeva vecih od 10"<<endl;
	system("PAUSE");
	return 0;
	
}
