#include <iostream>
using namespace std;


int main()
{
	int odgovor, i;
	cout<<"Unesi broj clanova: ";
	cin>>odgovor;
	int polje[odgovor];
	for( i = 0; i < odgovor;i++)
	{
		cin>>polje[i];
	}
	for(i = 0; i < odgovor; i += 2)
	{
		cout<<polje[i]<<endl;
	}
	system("PAUSE");
	return 0;
}
