#include <iostream>
using namespace std;

int main()
{
	int x, proizvod, n, najviseP;
	string maticniB, najviseProizvoda;
	float ukupnoProizvoda;
	cout<<"Unesi broj radnika: "<<endl;
	cin>>n;
	for(int i = 1;i<=n; i++)
	{
		najviseP = n;
		cout<<"Unesi maticni broj: "<<endl;
		cin>>maticniB;
		cout<<"Unesi koliko je proizvoda napravio radnik: "<<endl;
		cin>>proizvod;
		ukupnoProizvoda = ukupnoProizvoda + proizvod;
		if(proizvod > najviseP  )
		{
			najviseProizvoda = maticniB;
		}
		
	}
	cout<<"Unesi maticni broj X korisnika: ";
	cin>>maticniB;
	cout<<"Unesi koliko je proizvoda napravio radnik X: "<<endl;
	cin>>x;
	cout<<"Ukupno je proizvedeno "<<ukupnoProizvoda<<" proizvoda."<<endl;
	cout<<"Prosjecni broj proizvedenih komada po radniku je: "<<ukupnoProizvoda / n<<"."<<endl;
	cout<<"Najvise proizvoda je proizveo radnik s maticnim brojem: "<<najviseProizvoda<<endl;
	cout<<"X radnik je napravio "<<najviseP - x<<".";

}
