#include <iostream>
using namespace std;

int main()
{
	int n,i, a = 0,b = 0,c = 0;
	cin>>n;
	string odjeljak[n], naslov[n];
	for(i = 0; i<n; i++)
	{
		cin>>odjeljak[i]>>naslov[i];
	}
	for(i = 0; i<n; i++)
	{
		if(odjeljak[i] == "section")
		{
			a++;
			cout<<a<<" "<<naslov[i]<<endl;
		}
		if(odjeljak[i] == "subsection")
		{
			b++;
			cout<<a<<"."<<b<<" "<<naslov[i]<<endl;
		}
		if(odjeljak[i] == "subsubsection")
		{
			c++;
			cout<<a<<"."<<b<<"."<<c<<" "<<naslov[i]<<endl;

		}
	}
	return 0;
	
}
