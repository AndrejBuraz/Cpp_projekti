
#include <iostream>
using namespace std;

int main()
{
	char glas1,glas2,glas3;
	cout<<"Unesi prvi glas: ";
	cin>>glas1;
	cout<<"Unesi drugi glas: ";
	cin>>glas2;
	cout<<"Unesi treci glas: ";
	cin>>glas3;
	if(glas1 == 'A' && glas2 == 'A'&& glas3 == 'A'||glas1 == 'A'&& glas2 == 'A' || glas2 == 'A' && glas3 == 'A' || glas1 == 'A'&& glas3 == 'A')
	{
		cout<<"Pobjednik je A"<<endl;
	}
	else if(glas1 == 'B' && glas2 == 'B'&& glas3 == 'B'||glas1 == 'B'&& glas2 == 'B' || glas2 == 'B' && glas3 == 'B' || glas1 == 'B'&& glas3 == 'B')
	{
		cout<<"Pobjednik je B"<<endl;
	}
	else if(glas1 == 'N' && glas2 == 'B' && glas3 == 'A' || glas1 == 'B' && glas2 == 'N' && glas3 == 'A')
	{
		cout<<"Pobjednik je A"<<endl;
	}
	else if(glas1 == 'A' && glas2 == 'N' && glas3 == 'B' || glas1 == 'N' && glas2 == 'A' && glas3 == 'B')
	{
		cout<<"Pobjednik je B"<<endl;
	}
	else
	{
		cout<<"Mec je nerijesen"<<endl;
	}
	system("PAUSE");
	return 0;
}
