#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	string rijec2 = "aat";
	string rijec = "aBc";
	for(int i = 0; i<3; i++)
	{
	
	if(isupper(rijec[i]))
	{
		rijec2 = islower(rijec);
	}
} 
	cout<<rijec2<<endl;
	system("PAUSE");
	return 0;
}
