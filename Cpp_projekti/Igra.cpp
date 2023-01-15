#include <iostream>
using namespace std;

int main(){
	int broj;
	int zbroj1 = 0;
	int zbroj2 = 0;
	for( int i = 1; i <= 3; i++)
	{
		cout<<"Unesi Markov "<<i<<". rezultat: ";
		cin>>broj;
		zbroj1 = zbroj1 + broj;
	}
	for( int j = 1; j <= 3; j++)
	{
		cout<<"Unesi Petrov "<<j<<". rezultat: ";
		cin>>broj;
		zbroj2 = zbroj2 + broj;
	}
	if(zbroj1 > zbroj2)
	{
		cout<<"Pobjednik igre je Marko!"<<endl;
	}
	else if(zbroj2 > zbroj1)
	{
		cout<<"Pobjednik igre je Petar!"<<endl;
	}
	else 
	{
		cout<<"Igra je izjednacena!"<<endl;
	}
	system("PAUSE");
	return 0;
}


