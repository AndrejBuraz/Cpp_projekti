#include <iostream>
using namespace std;

int main()
{
	int dec, bin[] = {0,0,0,0,0,0,0,0,0,0};
	cout<<"Unesi decimalni broj: ";
	cin>>dec;
	for(int i = 0; i < 10; i++)
	{
		bin[i] = dec % 2;
		dec = dec / 2;
		if(dec == 0)
		{
			break;
		}
	}
	cout<<"Rezultat u binarnom je: ";
	for(int j = 9; j >= 0; j--)
	{
		cout<<bin[j];
	}
	return 0;
	
}
