#include <iostream>
using namespace std;

int main()
{
    int broj;
    int parni = 0;
    int neparni = 0;
    for(int i = 1;i <= 10; i++)
    {
        cout<<("Unesi ")<<i<<(". broj: ");
        cin>>broj;
        if(broj % 2 == 0)
        {
            parni ++;
        }
        else
        {
            neparni ++;
        }
    }
    cout<<("Upisano je ")<<parni<<(" parnih i ")<<neparni<<(" neparnih brojeva");
    system("PAUSE");
    return 0;
}