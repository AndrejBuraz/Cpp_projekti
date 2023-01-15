#include <iostream>
#include <math.h> //moras includati math.h kako bi defineao konstantu

using namespace std;
#define KAMATA 0.07   // 7% definiras u decimalnom kao 0.07



int main()
{
    float novac, novac2, novac3, ukupno; //ako zelis da korisnik moze ubacivati i kune u decimalnom broju stavi float, ako ne stavi samo int
    cout<<"Unesi iznos prvog podizanja novca: ";
    cin>>novac;
    cout<<"Unesi iznos drugog podizanja novca: ";
    cin>>novac2;
    cout<<"Unesi iznos treceg podizanja novca: ";
    cin>>novac3;
    ukupno = (KAMATA * novac) + (novac2 * 0.09) + (novac3 * 0.11);  //za svaki put banka uzme 2% vise, prvi put je to 7%, pa 9%, pa 11%
    cout<<"Banka je ukupno Anti uzela: "<<ukupno<<" kn.";
    system("PAUSE");
    return 0;
}