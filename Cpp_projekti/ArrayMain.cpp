#include <iostream>
using namespace std;

int main()
{
	int odgovori[4]; // Array u kojem se spremaju brojevi koje korisnik unese
	int zbroj = 0;
	
	for(int i = 0;i < 5;i++)
	{
		cout<<("Unesi broj: ");
		cin>>odgovori[i];
		zbroj = zbroj + odgovori[i];
		
	}
	cout<<("Parni brojevi su: ");
	for(int a = 0;a < 5;a++)
	{
		if (odgovori[a]%2 == 0)
		{
			cout<<odgovori[a]<<(", ");
		}
	}
	cout<<("zbroj brojeva je : ")<<zbroj<<endl;
	system("PAUSE");
	return 0;
}
