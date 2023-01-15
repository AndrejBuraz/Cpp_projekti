#include <iostream>
using namespace std;

int main()
{
    char prviZnak, drugiZnak;
    cout<<("Unesi prvi znak ");
    cin>>prviZnak;
    cout<<("Unesi drugi znak ");
    cin>>drugiZnak;
    if(prviZnak == drugiZnak)
    {
        cout<<("Znakovi su jednaki");
    }
    else
    {
        cout<<("Znakovi nisu jednaki");
    }
    system("PAUSE");
    return 0;
}
