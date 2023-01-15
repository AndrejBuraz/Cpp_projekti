#include <iostream>
using namespace std;

int main()
{
	int ocjene, brojOcjena;
	float prosjek, zbroj;
	cout<<"Unesi broj ocjena: ";
	cin>>brojOcjena;
	for(int i = 0; i < brojOcjena; i++)
	{
		cout<<"Unesi "<<i<<". ocjenu : ";
		cin>>ocjene;
		zbroj = zbroj + ocjene;
	}
	prosjek = zbroj / brojOcjena;
	if(prosjek < 1.5)
	{
		cout<<"Prosjek: "<<prosjek<<" , a ocjena je nedovoljan (1)";
	}
	if(prosjek > 1.5 && prosjek < 2.5)
	{
		cout<<"Prosjek: "<<prosjek<<" , a ocjena je dovoljan (2)";
	}
	if(prosjek > 2.5 && prosjek < 3.5)
	{
		cout<<"Prosjek: "<<prosjek<<" , a ocjena je dobar (3)";
	}
	if(prosjek > 3.5 && prosjek < 4.5)
	{
		cout<<"Prosjek: "<<prosjek<<" , a ocjena je vrlo dobar (4)";
	}
	if(prosjek > 4.5 )
	{
		cout<<"Prosjek: "<<prosjek<<" , a ocjena odlican (5)";
	}
	return 0;
	system("PAUSE");
}
