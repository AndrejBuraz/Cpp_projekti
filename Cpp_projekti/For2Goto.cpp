#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int k, n, zbroj = 0;
	unos:cout<<"Unesi pocetnu vrijednost: ";
	cin>>k;
	cout<<"Unesi zavrsnu vrijednost: ";
	cin>>n;
	if(k>n)
	{
		cout<<"Pogresan unos."<<endl;
		goto unos;
	}
	for(k;k<n;k++)
	{
		zbroj = zbroj + pow(k,2);
	}
	cout<<"Zbroj kvadrata brojeva je: "<<zbroj<<endl;
	system("PAUSE");
	return 0;
}
