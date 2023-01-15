#include <iostream>
using namespace std;

int main()
{
	int x, masa, brojKomada, n, zaradaPrtljaga = 0, visePrtljage = 0, prtljaga = 0;
	float  prMasa = 0;
	cout<<"Unesi koliko kn putnik mora platiti za svaku kilu prtljage preko 30kg: ";
	cin>>x;
	cout<<"Unesi broj putnika: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cout<<"Unesi broj komada prtljage za "<<i<<". putnika: ";
		cin>>brojKomada;
		prtljaga = prtljaga + brojKomada;
		cout<<"Unesi ukupnu masu prtljage za "<<i<<". putnika: ";
		cin>>masa;
		if( masa > 30)
		{
			zaradaPrtljaga = zaradaPrtljaga + (masa - 30);
		}
		if(brojKomada > 7)
		{
			visePrtljage++;
		}
		prMasa = prMasa + masa;
		
		
	}
	cout<<"Ukupna zarada od prekomjerne prtljage je: "<<zaradaPrtljaga * x<<" kn."<<endl;
	cout<<"Broj putnika koji imaju vise od 7 komada prtljage je: "<<visePrtljage<<endl;
	cout<<"Prosjecna masa jednog komada prtljage je: "<<prMasa / prtljaga<<" kg.";
	system("PAUSE");
	return 0; 
}
