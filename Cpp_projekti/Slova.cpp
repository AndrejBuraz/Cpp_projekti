#include <iostream>
using namespace std;

int main()
{
	int i,j,m,n, brojSlova, a;
	cin>>m>>n;
	char polje[m][n];
	for(i = 0; i<m; i++)
	{
		for(j = 0; j<n; j++)
		{
			cin>>polje[i][j];
		}
	}
	for(i = 0; i< n; i++)
	{
		cout<<polje[0][i];
	}
	for(j = 1; j<m; j++)
	{
		cout<<polje[j][n-1];
	}
	for(i = n- 2; i >= 0; i--)
	{
		cout<<polje[m-1][i];
	}
	for(j = m-2; j > 0; j--)
	{
		cout<<polje[j][0];
	}
	for(i = 1; i <= n -2; i++)
	{
		cout<<polje[1][i];
	}
	for(j = 0; j < n-2; j++)
	{
		cout<<polje[2][n-2-j];
	}
	return 0;
}
