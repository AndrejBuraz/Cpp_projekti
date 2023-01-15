#include <iostream>
using namespace std;

int main()
{
    int broj;
    float asredina;
    for(int i = 1;i<=5;i++)
    {
        cout<<("Unesi broj ");
        cin>>broj;
        asredina=asredina + broj;
    }
    asredina = asredina / 5;
    cout<<("Aritmetiča sredinba brojeva je ")<<asredina;
    system("PAUSE");
    return 0;
}