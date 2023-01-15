#include <iostream>
using namespace std;

int main()
{
	int x,y,odluka;
	cout<<"Unesi x: ";
	cin>>x;
	cout<<"Odaberi postupak za izracunavanje y (od 1 do 5): ";
	cin>>odluka;
	switch(odluka)
	{
		case 1:
			y=x+2;
			break;
		
		case 2:
		    y=x-2;
		    break;
		    
		case 3:
			y=x/2;
			break;
			
		case 4:
			y=x-5;
			break;
			
		case 5:
			y=2-x;
			break;
	}
	cout<<"y = "<<y<<endl;
	system("PAUSE");
	return 0;
	
}
