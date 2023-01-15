#include <iostream>
using namespace std;

int main()
{
	int prviBroj, drugiBroj, treciBroj;  //5,13,3
	cout<<"Unesi prvi broj: ";
	cin>>prviBroj;
	cout<<"Unesi drugi broj: ";
	cin>>drugiBroj;
	cout<<"Unesi treci broj: ";
	cin>>treciBroj;
	if(prviBroj > drugiBroj && prviBroj > treciBroj || drugiBroj < prviBroj && drugiBroj > treciBroj)
	{
		cout<<"Brojevi od najmanjeg do najveceg: "<<prviBroj<<", "<<drugiBroj<<", "<<treciBroj;
	}
	system("PAUSE");
	return 0;
}

