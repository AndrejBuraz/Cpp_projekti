#include <iostream>
using namespace std;

int main()
{
    int broj;
    int zbroj = 0;
    for(int i = 1; i <=5; i++)
    {
        cout<<("Unesi ")<<i<<(". broj : ");
        cin>>broj;
        zbroj = zbroj + broj;
        if(broj %2 ==0)
        {
            cout<<("Broj ")<<broj<<(" je paran")<<endl;
        }
    }
    cout<<("Zbroj brojeva je: ")<<zbroj;
    system("PAUSE");
    return 0;
    
}