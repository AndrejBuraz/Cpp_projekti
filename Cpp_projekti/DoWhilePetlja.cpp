#include <iostream>
using namespace std;

int main()
{
	int broj;
	do
	{
		cout<<"Unesi broj razlicit od nule: ";
		cin>>broj;
		cout<<"Uneseni broj je: "<<broj<<endl;	
	}
	while(broj != 0);
	cout<<"Petlja je prekinuta jer je upisani broj nula";
	system("PAUSE");
	return 0;
	
}
