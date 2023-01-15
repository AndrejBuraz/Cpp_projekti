#include <iostream>
using namespace std;

int main()
{
    int dan1, dan2, dan3, dan4, dan5;
    cout<<"Unesi broj s kupona za 1. dan: ";
    cin>>dan1;
    cout<<"Unesi broj s kupona za 2. dan: ";
    cin>>dan2;
    cout<<"Unesi broj s kupona za 3. dan: ";
    cin>>dan3;
    cout<<"Unesi broj s kupona za 4. dan: ";
    cin>>dan4;
    cout<<"Unesi broj s kupona za 5. dan: ";
    cin>>dan5;
    if(dan1 == dan2 && dan2 == dan3 || dan2 == dan3 && dan3 == dan4 || dan3 == dan4 && dan4 == dan5 ) // provjeravas dali su brojevi isti, ako je && (AND) znaci da obije strane moraju biti iste, ako je || (OR) znaci da samo jedan uvjet mora biti ispunjen 
    {
        cout<<"Ana je osvojila nagradnu igru!";
    }
    else
    {
        cout<<"Ana nije osvojila nagradnu igru :(";
    }
}