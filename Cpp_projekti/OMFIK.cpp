#include <iostream>
#include <math.h>

#define PI 3.14


using namespace std;
int main()
{
    int broj, drugiBroj, treciBroj;
    string odluka, odluka2;
    int pot;
    cout<<"Program za matematicke operacije"<<endl;
    cout<<"Odaberi: Korijen, Potencija, Krug, Pravokutnik, PravokutniTrokut, KvadratnaJednadzba, Sve: ";
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
        cout<<broj<<(" na ")<<pot<<(".je : ")<<pow(broj, pot);
    }
    if(odluka == "Krug" || odluka == "krug")
    {
        cout<<"Unesi r kruga: ";
        cin>>broj;
        cout<<"Opseg kruga je: "<<2*broj*PI<<", a povrsina je: "<<pow(broj, 2)*PI;
    }
    if(odluka == "Pravokutnik" || odluka == "pravokutnik")
    {
        cout<<"Unesi broj: ";
        cin>>broj;
        cout<<"Unesi drugi broj: ";
        cin>>drugiBroj;
        cout<<("Povrsina pravokutnika je: ")<<broj*drugiBroj<<(", a opseg je: ")<<2*(broj+drugiBroj);
    }
    if(odluka == "PravokutniTrokut" || odluka =="PRAVOKUTNITROKUT" || odluka =="pravokutnitrokut" || odluka == "pravokutniTrokut" || odluka == "Pravokutnitrokut")
    {
        cout<<"Unesi stranicu a: ";
        cin>>broj;
        cout<<"Unesi stranicu b: ";
        cin>>drugiBroj;
        cout<<"Unesi stranicu c: ";
        cin>>treciBroj;
        cout<<"Povrsina pravokutnog trokuta je: "<<(broj*drugiBroj)/2<<(", a opseg trokuta je: ")<<broj+drugiBroj+treciBroj;
    }
    if(odluka == "Sve" || odluka == "SVE" || odluka == "sve")
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
    	cout<<("Povrsina pravokutnika je: ")<<broj*drugiBroj<<(", a opseg je: ")<<2*(broj+drugiBroj)<<endl;
    	cout<<"Povrsina pravokutnog trokuta je: "<<(broj*drugiBroj)/2<<(", a opseg trokuta je: ")<<broj+drugiBroj+treciBroj<<endl;
    }
    system("PAUSE");
    return 0;
}
