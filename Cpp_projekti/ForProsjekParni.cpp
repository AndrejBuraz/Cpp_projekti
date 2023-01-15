#include <iostream>
using namespace std;

int main()
{
    int broj;
    float asredina;
    int t = 0;  // ova varijabla je jos jedan brojac
    for(int i = 1;i <= 10; i++)
    {
        cout<<("Unesi broj ");
        cin>>broj;
        if(broj % 2 == 0 && broj > 10)
        {
            asredina = asredina + broj;
            t++;  // svaki put kada je uneseni broj ispunio uvijet ovaj brojač povećati će se za 1
        }
    }
    asredina = asredina / t; // asredina će se podijeliti s onoliko brojeva koliko je ispunilo uvjet
    cout<<("Aritmetiča sredina unesenih parnih brojeva većih od 10 je: ")<<asredina;
    system("PAUSE");
    return 0;
}