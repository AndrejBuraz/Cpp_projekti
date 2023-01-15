#include <iostream>
using namespace std;

int main()
{
    int m,n;
    cout<<("Unesi početnu vrijednost petlje: ");
    cin>>m;
    cout<<("Unesi završnu vrijednost petlje: ");
    cin>>n;
    for( m; m <= n;m++)
    {
        if(m % 3 == 0)
        {
            cout<<m<<endl;
        }
    }
    system("PAUSE");
    return 0;
}