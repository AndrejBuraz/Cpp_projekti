#include <iostream>
using namespace std;

int main()
{
	int parni = 0,neparni = 0,*pa, *nepa, broj;
	pa = &parni;
	nepa = &neparni;
	for(int i = 0; i<15; i++)
	{
		cout<<"Unesi "<<i+1<<". broj: ";
		cin>>broj;
		if(broj % 3 == 0 && broj % 2 == 0)
		{
			parni++;
		}
		if(broj % 2 == 1 && broj % 5 == 0)
		{
			neparni++;
		}
	}
	cout<<"Uneseno je "<<*pa<<" parnih brojeva dijeljivih s 3"<<endl;
	cout<<"Uneseno je "<<*nepa<<" neparnih brojeva dijeljivih s 5"<<endl;
	return 0;
}
