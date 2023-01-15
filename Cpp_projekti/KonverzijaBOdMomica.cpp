#include <iostream>
using namespace std;

int main ()
{
	int Grami, Kilogrami=0;
	do{
	cout<<"Unesi vrijednost u gramima: ";
	cin>>Grami;
	Kilogrami=Grami/1000;
	cout<<"Uneseni grami konvertirani u killograme su: "<<Kilogrami<<" kg."<<endl;			
	}while(Grami!=0);
	return 0;	
}
