#include <iostream>
using namespace std;

int main()
{
	int n,m, i, j;
	cin>>n>>m;
	if(m == 0)
	{
		cout<<n;
	}
	else
	{
	int polje[m][2];
	for(i = 0; i <m; i++)
	{
		for(j = 0; j < 2; j++)
		{
			cin>>polje[i][j];
		}
	}
	cout<<m;
	}
	return 0;
}
