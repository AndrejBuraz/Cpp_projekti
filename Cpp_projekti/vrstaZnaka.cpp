#include <iostream>
using namespace std;

int main()
{
	char znak;
	cout<<"Unesi znak: ";
	cin>>znak;
	if(znak >= '0' && znak <='9')
	{
		cout<<"Znak je broj!";
	}
	else
	{
	if(znak >= 'a' && znak <= 'z' || znak >= 'A' && znak <= 'Z')
	    {
		cout<<"Znak je slovo!";
	    }
	else
        {
    	cout<<"Znak je neki drugi znak!";
	    }
    }
    
	system("PAUSE");
	return 0;
}
