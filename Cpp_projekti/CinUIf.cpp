#include <iostream>
using namespace std;

int main()
{
    int broj;
    cout<<("Unesi broj ");
    cin>>broj;
    if(broj > 10 && broj < 30)
    {
        cout<<broj;
    }
    else
    {
        cout<<("Broj je manji od 10 ili veći od 30");
    }
    system("PAUSE");
    return 0;
}
