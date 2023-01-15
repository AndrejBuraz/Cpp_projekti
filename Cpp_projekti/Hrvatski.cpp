#include <iostream>
using namespace std;

int main()
{
	int n, b, e, i, a = 0, x = 0;
	cin>>n>>b>>e;
	int polje[n];
	for(i = 0; i < n; i++)
	{
		cin>>polje[i];
	}
	for(i = 0; i < n; i++)
	{
		if(polje[i] % b == 0 && polje[i] % e == 0 && polje[i] % 2 == 0)
		{
			a = a + (polje[i] / 2);
			x = x + (polje[i] / 2);
		}
		else if(polje[i] % b == 0 && polje[i] % e != 0)
		{
			x += polje[i];
		}
		else if(polje[i] % e == 0 && polje[i] % b != 0)
		{
			a += polje[i];
		}
	}
	cout<<x<<" "<<a;
	return 0;
}
