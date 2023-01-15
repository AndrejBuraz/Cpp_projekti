#include <iostream>
using namespace std;

int main()
{
	int a,b,x,y,n,m,dani = 1;
	cin>>n>>m;
	cin>>a>>x;
	cin>>b>>y;
	do
	{
		if(dani % a == 0 && dani % b == 0 )
		{
			n = n + 2*(x+y);
		}
		else if(dani % a == 0)
		{
			n = n + x;
		}
		else if(dani % b == 0)
		{
			n = n + y;
		}
		dani++;
		
	}while(n<=m);
	cout<<dani-1;
	return 0;
}
