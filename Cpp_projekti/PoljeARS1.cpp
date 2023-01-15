#include <iostream>
using namespace std;

int main()
{
	int odgovor, i;
	float zbroj = 0, asredina = 0;
	cout<<"Unesi broj clanova: ";
	cin>>odgovor;
	int polje[odgovor];
	for( i = 0; i < odgovor; i++)
	{
		cout<<"Unesi "<<i+1<<". element: ";
		cin>>polje[i];
	}
	for(i = 1; i < odgovor; i += 2)
	{
		zbroj = zbroj + polje[i];
	}
	asredina = zbroj / (odgovor / 2);
	cout<<"Aritmeticka sredina brojeva s neparnim indeksom je: "<<asredina<<endl;
	system("PAUSE");
	return 0;
}
