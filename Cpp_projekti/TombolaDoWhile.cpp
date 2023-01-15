#include <iostream>
using namespace std;

int main()
{
	int sifra, brojIgraca = -1,zaradaProgramera;
	float nagrada;
	do
	{
		cout<<"Unesi sifru: ";
		cin>>sifra;
		brojIgraca ++;
		
	}while(sifra != -1 && brojIgraca < 100);
	cout<<"Broj igraca: "<<brojIgraca<<endl;
	nagrada = (100 * brojIgraca) * 0.7;
	cout<<"Nagrada je: "<<nagrada<<"kn."<<endl;
	zaradaProgramera = (100 * brojIgraca) * 0.3;
	cout<<"Zarada programera je: "<<zaradaProgramera<<"kn."<<endl;
	system("PAUSE");
	return 0;
}
