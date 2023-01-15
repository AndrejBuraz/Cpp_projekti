#include <iostream>
using namespace std;

int main()
{
	float polje[7]={0.2, 4.4, 84.33, 182.12, 7.48, 11.77, 10.1};
	for(int i = 0; i < 7; i++)
	{
		if(polje[i] > 10)
		{
			cout<<polje[i]<<endl;
		}
	}
	system("PAUSE");
	return 0;
}
