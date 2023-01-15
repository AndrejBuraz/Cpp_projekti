#include <iostream>
using namespace std;

int main()
{
    float prviBroj, drugiBroj, umnozak, kolicnik, zbroj, razlika;
    char odgovor;
    cout<<("Unesi broj: ");
    cin>>prviBroj;
    cout<<("Odaberi matematicku operaciju: ");
    cin>>odgovor;
    cout<<("Unesi drugi broj: ");
    cin>>drugiBroj;
    switch(odgovor)
    {
        case '+':
        zbroj=prviBroj+drugiBroj;
        cout<<("Zbroj brojeva je: ")<<zbroj;
        break;
        
        case '-':
        razlika=prviBroj-drugiBroj;
        cout<<("Razlika brojeva je: ")<<razlika;
        break;
        
        case '*':
        umnozak=prviBroj*drugiBroj;
        cout<<("Umnozak brojeva je: ")<<umnozak;
        break;
        
        case '/':
        kolicnik=prviBroj/drugiBroj;
        cout<<("Kolicnik brojeva je: ")<<kolicnik;
        break;
        
        default:
        cout<<("Matematicka operacija nije prepoznata, pokusaj ponovno ");
        
    }
    system("PAUSE");
    return 0;
}

    
