#include <iostream>
using namespace std;

int main()
{
	int n,  polje[7] = {1,8,4,9,18,3,9};
	float asredina = 0, zbroj = 0;
	for(int i = 0; i < 7; i++)
	{
		zbroj = zbroj + polje[i];
	}
	asredina = zbroj / 7;
	for(int x = 0; x < 7; x++)
	{
		if(polje[x] > asredina)
		{
			n++;
		}
	}
	cout<<"Aritmeticka sredina je: "<<asredina<<endl;
	cout<<"Broj elemenata vecih od aritmeticke sredine je: "<<n<<endl;
	system("PAUSE");
	return 0;
	
}
