#include <iostream>
#include<cstring>
using namespace std;

int duljina(string a, string b)
{
	int rez;
	rez = a.length();
	rez = rez + b.length();
	return rez;
}

int main()
{
	string prva,druga, *p1, *p2;
	p1 = &prva;
	p2 = &druga;
	cout<<"Unesi prvu rijec: ";
	cin>>*p1;
	cout<<"Unesi drugu rijec: ";
	cin>>*p2;
	cout<<"Duljina te 2 rijeci je: "<<duljina(prva, druga)<<" slova";
	return 0;
}
