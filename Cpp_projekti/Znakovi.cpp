#include <iostream>
using namespace std;

int main()
{
	char znak,znak2;
	cout<<"Unesi prvi znak: ";
	cin>>znak;
	cout<<"Unesi drugi znak: ";
	cin>>znak2;
	if(znak == znak2)
	{
		cout<<"Znakovi su jednaki!";
	}
	else
	{
		cout<<"Znakovi nisu jednaki!";
	}
	system("PAUSE");
	return 0;
}
