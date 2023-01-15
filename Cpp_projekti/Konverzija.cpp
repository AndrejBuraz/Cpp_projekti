#include <iostream>
using namespace std;

int main()
{
	int sati;
	do
	{
		cout<<"Unesi sate (0 zazavrsetak programa): ";
		cin>>sati;
		cout<<sati<<"sata je "<<sati * 3600<<" sekundi."<<endl;
	}while(sati != 0);
	system("PAUSE");
	return 0;
}
