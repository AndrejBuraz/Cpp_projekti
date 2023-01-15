#include <iostream>
using namespace std;

int main()
{
	int n, i;
	cin>>n;
	int polje[n];
	for( i = 0; i<n; i++)
	{
		cin>>polje[i];
	}
	for( i = 0; i<n; i++)
	{
		cout<<polje[i];
	}
	
	return 0;
	
}
