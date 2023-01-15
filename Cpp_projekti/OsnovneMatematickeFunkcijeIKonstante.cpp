#include <iostream>
#include <math.h>

#define PI 3.14


using namespace std;
int main()
{
    int broj, drugiBroj, treciBroj;
    int a = 0;
    int c = 0;
    int skup[7];
    string odluka;
    int pot, dekadski[8], binarni, zbroj;
    cout<<"Program za matematicke operacije"<<endl;
    cout<<"Odaberi: Korijen, Potencija, Krug, Pravokutnik, PravokutniTrokut, "<<endl;
	cout<<"BinarniUDekadski, VolumenValjka, VolumenKadrata, Sinus, Kosinus, Sve: ";
    cin>>odluka;
    if(odluka == "Korijen" || odluka == "korijen")
    {
        cout<<"Unesi broj: ";
        cin>>broj;
        cout<<"Korijen broja "<<broj<<" je: "<<sqrt(broj);
    }
    if(odluka == "potencija" ||odluka == "Potencija")
    {
        cout<<"Unesi broj: ";
        cin>>broj;
        cout<<"Unesi potenciju: ";
        cin>>pot;
        cout<<broj<<(" na ")<<pot<<(" .je : ")<<pow(broj, pot);
    }
    if(odluka == "Krug" || odluka == "krug")
    {
        cout<<"Unesi r kruga: ";
        cin>>broj;
        cout<<"Opseg kruga je: "<<2*broj*PI<<", a površina je: "<<pow(broj, 2)*PI;
    }
    if(odluka == "Pravokutnik" || odluka == "pravokutnik")
    {
        cout<<"Unesi broj: ";
        cin>>broj;
        cout<<"Unesi drugi broj: ";
        cin>>drugiBroj;
        cout<<("Površina pravokutnika je: ")<<broj*drugiBroj<<(", a opseg je: ")<<2*(broj+drugiBroj);
    }
    if( odluka == "PravokutniTrokut" || odluka == "pravokutniTrokut" )
    {
        cout<<"Unesi stranicu a: ";
        cin>>broj;
        cout<<"Unesi stranicu b: ";
        cin>>drugiBroj;
        cout<<"Unesi stranicu c: ";
        cin>>treciBroj;
        cout<<"površina pravokutnog trokuta je: "<<(broj*drugiBroj)/2<<(", a opseg trokuta je: ")<<broj+drugiBroj+treciBroj;
    }
    if(odluka == "BinarniUDekadski" || odluka == "binarniudekadski" || odluka == "BINARNIUDEKADSKI")
    {
    		
	}
	if(odluka == "VolumenKvadrata" || odluka == "VOLUMENKVADRATA" || odluka == "volumenkvadrata" )
	{
		cout<<"Unesi stranicu a: ";
		cin>>broj;
		cout<<"Unesi stranicu b: ";
		cin>>drugiBroj;
		cout<<"Unesi stranicu c: ";
		cin>>treciBroj;
		cout<<"Volumen kvadrata je: "<<broj*drugiBroj*treciBroj;
	}
	if(odluka == "volumenvaljka" || odluka == "VOLUMENVALJKA" || odluka == "VolumenValjka" )
	{
		cout<<"Unesi visinu: ";
		cin>>broj;
		cout<<"Unesi povrsinu baze: ";
		cin>>drugiBroj;
		cout<<"Volumen valjka je: "<<broj*drugiBroj;
	}
	if(odluka == "binarniudekadski" || odluka == "BinarniUDekadski" || odluka == "BINARNIUDEKADSKI" )
	{
		  for(int v = 0; v <8; v++)
    {
        cout<<"Unesi "<<v<<". znamenku: ";
        cin>>skup[v];
        if(skup[v] == 1)
        {
            if(v == 0)
            {
                a = 128;
            }
            if(v == 1)
            {
                a = 64;
            }
            if(v == 2)
            {
                a = 32;
            }
            if(v == 3)
            {
                a = 16;
            }
            if(v == 4)
            {
                a = 8;
                
            }
            if(v ==5)
            {
                a = 4;
            }
            if(v == 6)
            {
                a = 2;
            }
            if(v == 7)
            {
                a = 1;
            }
            c = c + a;
        }
    }
    cout<<"Tvoj broj u dekadskom sustavu je: "<<c<<endl;
	}
	if(odluka == "sinus" || odluka == "Sinus" || odluka == "SINUS")
	{
		cout<<"Unesi hipotenuzu: ";
		cin>>broj;
		cout<<"Unesi nasuprotnu katetu: ";
		cin>>drugiBroj;
		cout<<"Sinus pravokutnog trokuta je: "<<drugiBroj/broj;
	}
	if(odluka == "Kosinus" || odluka == "KOSINUS" || odluka == "kosinus")
	{
		cout<<"Unesi hipotenuzu: ";
		cin>>broj;
		cout<<"Unesi prilezecu katetu: ";
		cin>>drugiBroj;
		cout<<"Kosinus pravokutnog trokuta je: "<<drugiBroj/broj;
		
	}
	if(odluka == "SVE" || odluka == "Sve" || odluka == "sve")
	{
		cout<<"Unesi prvi broj: ";
    	cin>>broj;
    	cout<<"Unesi drugi broj: ";
    	cin>>drugiBroj;
    	cout<<"Unesi treci broj: ";
    	cin>>treciBroj;
    	cout<<"Korijen broja "<<broj<<" je: "<<sqrt(broj)<<endl;
    	cout<<"Broj "<<broj<<" na potenciju "<<drugiBroj<<" je: "<<pow(broj,drugiBroj)<<endl;
    	cout<<"Opseg kruga je: "<<2*broj*PI<<", a povrsina je: "<<pow(broj, 2)*PI<<endl;
    	cout<<"Povrsina pravokutnika je: "<<broj*drugiBroj<<(", a opseg je: ")<<2*(broj+drugiBroj)<<endl;
    	cout<<"Povrsina pravokutnog trokuta je: "<<(broj*drugiBroj)/2<<(", a opseg trokuta je: ")<<broj+drugiBroj+treciBroj;
    	cout<<"Volumen kvadrata je: "<<broj*drugiBroj*treciBroj;
    	cout<<"Volumen valjka je: "<<broj*drugiBroj;
    	cout<<"Sinus pravokutnog trokuta je: "<<drugiBroj/broj;
    	cout<<"Kosinus pravokutnog trokuta je: "<<drugiBroj/broj<<endl;
	}
    system("PAUSE");
    return 0;
}
