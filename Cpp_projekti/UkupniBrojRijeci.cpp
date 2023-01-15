#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	char recenica[] = {"Algoritmi i programiranje!"};
	int i = 0, m = 0;	
	for(i; recenica[i]; i++)
	{
		if(isspace(recenica[i]))
		{
			m++;
		}
	}
	cout<<"Broj rijeci u recenici je "<<m+1<<endl;
	system ("PAUSE");
	return 0;
}
