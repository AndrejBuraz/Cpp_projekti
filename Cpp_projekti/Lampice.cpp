#include <iostream>
using namespace std;

int main()
{
	int brojLampica, uzorak, i, rez1 = 0, rez2[30];
	cin>>brojLampica>>uzorak;
	int niz[brojLampica];
	for(i = 0; i< brojLampica; i++)
	{
		cin>>niz[i];
	}
	nazad:for(i = 0; i< brojLampica; i++)
	{
		if(niz[i] == niz[i+1] || niz[i] == niz[i+2] && niz[i+1] == niz[i+3])
		{
			rez1++;
			goto nazad;
		}
		else
		{
			rez1 = -1;
		}
		rez2[i] = i;
		rez2[i+1] = i +1;
		break;
	}
	cout<<rez1<<endl;
	for(i = 0; i< uzorak; i++)
	{
		cout<<rez2[i]<<" ";
	}
	return 0;
}
