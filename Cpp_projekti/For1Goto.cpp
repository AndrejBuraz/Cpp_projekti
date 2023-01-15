#include <iostream>
using namespace std;

int main()
{
	int n, zbroj = 0;
	unos:cout<<"Unesi broj: ";
	cin>>n;
	if(n<=0)
	{
		cout<<"Pogresan unos.";
		goto unos;
	}
	for(int i = 1;i<n;i++)
	{
		zbroj = zbroj + i;
	}
	cout<<"Zbroj brojeva od 1 do "<<n<<" je: "<<zbroj<<endl;
	system("PAUSE");
	return 0;
}
