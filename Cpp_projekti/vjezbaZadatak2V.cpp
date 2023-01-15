#include <iostream>
using namespace std;

int main()
{
	int prviBroj,drugiBroj,treciBroj,i = 0;
	unos:cout<<"Unesi prvi broj: ";
	cin>> prviBroj;
	cout<<"Unesi drugi broj: ";
	cin>> drugiBroj;
	cout<<"Unesi treci broj: ";
	cin>> treciBroj;
	if(prviBroj < 0 || drugiBroj < 0 || treciBroj <0)
	{
		goto unos;
	}
	if(prviBroj % 7 == 0)
	{
	    cout<<prviBroj<<" je djeljiv sa 7, razultat je: "<<prviBroj/7<<endl;
    }
	if(prviBroj % 7 != 0)
	{
		cout<<prviBroj<<" nije djeljiv sa 7, razultat je: "<<prviBroj/7<<endl;
	}
	if(drugiBroj % 7 == 0)
	{
	    cout<<drugiBroj<<" je djeljiv sa 7, razultat je: "<<drugiBroj/7<<endl;
	}
	if(drugiBroj % 7 != 0)
	{
		cout<<drugiBroj<<" nije djeljiv sa 7, razultat je: "<<drugiBroj/7<<endl;
	}
	if(treciBroj % 7 == 0)
	{
	    cout<<treciBroj<<" je djeljiv sa 7, razultat je: "<<treciBroj/7<<endl;
	}
	if(treciBroj % 7 != 0)
	{
		cout<<treciBroj<<" nije djeljiv sa 7, razultat je: "<<treciBroj/7<<endl;
	}
	system("PAUSE");
	return 0;
}
