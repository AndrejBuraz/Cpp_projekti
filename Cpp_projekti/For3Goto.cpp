#include <iostream>
using namespace std;

int main()
{
	int i,j, parni = 0;
    cout<<"Unesi parni broj: ";
    cin>>i;
    for(i;i%2==0;parni++)
    {
	    unos:cout<<"Unesi parni broj: ";
	    cin>>i;
	    if(i%2!=0)
	    {
	    	cout<<"Uneseni broj je neparni, unesi parni broj za nastavak ili neparni za zavrsetak programa: "<<endl;
	    	cin>>j;
	    	if(j % 2 == 0)
	    	{
	    		parni++;
	    		goto unos;
			}
		}
    }
    cout<<"Upisano je "<<parni<<" parnih brojeva.";
    system("PAUSE");
    return 0;
}

