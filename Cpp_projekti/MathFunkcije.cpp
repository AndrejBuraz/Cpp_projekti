#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14;

float volumenValjka(float r,float v)
{
	float B = pow(r,2) * PI;
	float V = B*v;
	return V;
}

float povrsinaValjka(float r, float v)
{
	float P = 2*r*3.14*v;
	return P;
}

int volumenKvadra(int a, int b, int c)
{
	int rez = a*b*c;
	return rez;
}

float opsegValjak(float r, float v)
{
	float B = pow(r,2) * PI;
	float P = 2*r*3.14*v;
	float O = 2*B + P;
	return O;
}

int main()
{
	float prviBroj, drugiBroj, treciBroj, rezultat;
	int izbor;
	cout<<"Sto zelis racunati? Unesi 1 za povrsinu valjka,2 za volumen valjka, 3 za volumen kvadra, 4 za opseg valjka ";
	cin>>izbor;
	switch(izbor)
	{
		case 1:
			cout<<"Unesi r: ";
			cin>>prviBroj;
			cout<<"Unesi v: ";
			cin>>drugiBroj;
			rezultat = povrsinaValjka(prviBroj, drugiBroj);
			break;
		
		case 2:
			cout<<"Unesi r: ";
			cin>>prviBroj;
			cout<<"Unesi v: ";
			cin>>drugiBroj;
			rezultat = volumenValjka(prviBroj, drugiBroj);
			break;
			
		case 3:
			cout<<"Unesi a: ";
			cin>>prviBroj;
			cout<<"Unesi b: ";
			cin>>drugiBroj;
			cout<<"Unesi c: ";
			cin>>treciBroj;
			rezultat = volumenKvadra(prviBroj, drugiBroj, treciBroj);
			break;
			
		case 4:
			cout<<"Unesi r: ";
			cin>>prviBroj;
			cout<<"Unesi v: ";
			cin>>drugiBroj;
			rezultat = opsegValjak(prviBroj, drugiBroj);
			break;
			
			
	}
	cout<<"Rezultat je: "<<rezultat<<endl;
	system("PAUSE");
	return 0;
}
