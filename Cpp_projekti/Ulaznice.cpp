#include <iostream>
using namespace std;

int main()
{
	int i, ukupno = 0, stajanje = 0, sjedenje = 0, tribina = 0, stajanjeZ, sjedenjeZ, tribinaZ;
	float najvise, najmanje, rezultat;
	do
	{
		cout<<"Unesi broj ulaznice (1,2 ili 3): ";
		cin>>i;
		switch(i)
		{
			case 1:
				sjedenje++;
				break;
				
			case 2: 
			    stajanje++;
			    
			    break;
			
			case 3:
				tribina++;
				
				break;
		}
		
	}while(i == 1 || i == 2 || i == 3);
	ukupno = sjedenje + stajanje + tribina;
	sjedenjeZ = sjedenje * 30;
	stajanjeZ = stajanje * 20;
	tribinaZ = tribina * 40;
	cout<<"Ukupna zarada je: "<< sjedenjeZ + stajanjeZ + tribinaZ<<" kn."<<endl;
	cout<<"Ukupno je prodano "<<ukupno<<" ulaznica."<<endl;
	if(stajanje > sjedenje && stajanje > tribina)
	{
		cout<<"Najvise prodanih ulaznica su za stajanje"<<endl;
		najvise = stajanje;
		
	}
	if(sjedenje > stajanje && sjedenje > tribina)
	{
		cout<<"Najvise prodanih ulaznica su za sjedenje"<<endl;
		najvise = sjedenje;
		
	}
	if(tribina > stajanje && tribina > sjedenje)
	{
		cout<<"Najvise prodanih ulaznica su za tribine "<<endl;
		najvise = tribina;
	}

	if(stajanje < sjedenje && stajanje < tribina)
	{
		najmanje = stajanje;
		
	}
	if(sjedenje < stajanje && sjedenje < tribina)
	{
		najmanje = sjedenje;
		
	}
	if(tribina < stajanje && tribina < sjedenje)
	{
		najmanje = tribina;
	}
	

	najvise = (najvise / ukupno) * 100;
	najmanje = (najmanje / ukupno) * 100;
	//cout<<najvise<<endl;
	//cout<<najmanje<<endl;
	rezultat = najvise - najmanje;
	cout<<"Prodano je "<<rezultat<<" % vise ulaznica za najbolju kategoriju u odnosu na najmanju."<<endl;;
	
	system("PAUSE");
	return 0;
}
