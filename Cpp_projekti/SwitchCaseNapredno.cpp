#include <iostream>
#include <math.h>
using namespace std; 
#define PI 3.14

int main()
{
    float prviBroj, drugiBroj, rezultat;
    int bin[] = {0,0,0,0,0,0,0,0,0,0,0};
    int odabir, dec;
    unos:cout<<"Odaberi: povrsina kruga (1), povrsina pravokutnika(2), povrsina pravokutnog trokuta(3), dekadski u binarni(4): ";
    cin>>odabir;
    
     if(odabir != 1 && odabir !=2 && odabir !=3 && odabir != 4)
     {
        cout<<"Krivi unos!"<<endl;
        goto unos;
     }
    switch(odabir)
    {
        case 1:
        cout<<"Unesi radijus: ";
        cin>>prviBroj;
        drugiBroj = pow(prviBroj, 2);
        rezultat = drugiBroj * PI;
        cout<<"Povrsina kruga je: ";
        printf("%.2f", rezultat);
        break;
       
       
        case 2:
       
        cout<<"Unesi stranicu a: ";
        cin>>prviBroj;
        cout<<"Unesi stranicu b: ";
        cin>>drugiBroj;
        rezultat = prviBroj *drugiBroj;
        cout<<"Povrsina pravokutnika je: ";
        printf("%.2f", rezultat);
        break;
       
        case 3:
        cout<<"Unesi stranicu a: ";
        cin>>prviBroj;
        cout<<"Unesi stranicu b: ";
        cin>>drugiBroj;
        rezultat = (prviBroj*drugiBroj)/ 2;
        cout<<"Povrsina pravokutnog trokuta je: ";
        printf("%.2f", rezultat);
        break;
        
        case 4:
        cout<<"Unesi dekadski broj: ";
	    cin>>dec;
	    for(int i = 0; i < 11; i++)
	    {
		bin[i] = dec % 2;
		dec = dec / 2;
		if(dec == 0)
		{
			break;
		}
	    }
	    cout<<"Rezultat u binarnom je: ";
	    for(int j = 10; j >= 0; j--)
	    {
		cout<<bin[j];
	    }
	    break;
       
    }
    system ("PAUSE");
    return 0;
}
