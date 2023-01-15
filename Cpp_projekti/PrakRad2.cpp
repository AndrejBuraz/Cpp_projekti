#include <iostream>
using namespace std;

int main()
{
	int n, pismeni, usmeni, prosli = 0,  manje = 0;
	float prPismeni = 0, prUsmeni = 0;
	cout<<"Unesi broj ucenika: ";
	cin>>n;
	for(int i = 1; i <= n; i++)
	{
		cout<<"Unesi broj pismenih bodova za "<<i<<". ucenika: ";
		cin>>pismeni;
		prPismeni = prPismeni + pismeni;
		cout<<"Unesi broj usmenih bodova za "<<i<<". ucenika: ";
		cin>>usmeni;
		prUsmeni = prUsmeni + usmeni;
		if(pismeni > 29 && usmeni > 39)
		{
			prosli++;
		}
		if(pismeni < 10 || usmeni < 10)
		{
			manje++;
		}
	}
	cout<<"Proslo je "<<prosli<<" ucenika."<<endl;
	cout<<"Prosjecan broj bodova usmenog je "<<prUsmeni / n <<endl;
	cout<<"Prosjecan broj bodova pismenog je "<<prPismeni / n <<endl;
	cout<<"Ukupno je "<<manje<<" ucenika imalo manje od 10 bodova."<<endl;
	system("PAUSE");
	return 0;
	
}
