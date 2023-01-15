#include <iostream>
using namespace std;

int main()
{
	int n, i, k, t[100], rez = 0, m = 0;
	char c[100];
	cin>>n>>k;
	for(i = 0; i < n; i++)
	{
		cin>>t[i]>>c[i];
	}
	for(i = 0; i < n; i++)
	{
		if(c[i] == 'K')
		{
			rez = rez + t[i];
			m++;
			if(m == k)
			{
				break;
			}
		}
		else
		{
			rez = rez + t[i];
		}
	}
	cout<<rez;
	return 0;
}
