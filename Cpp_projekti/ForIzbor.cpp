#include <iostream>
using namespace std;

int main()
{
    int parni =1;
    int neparni =2;
    int odluka;
    cout<<("Unesi 1 ili 2 ");
    cin>>odluka;
    if(odluka == 1)
    {
        for(int i = 1; i <= 20;i++)
        {
            if(i%2 == 0)
            {
                cout<<i<<endl;
            }
        }
    }
    else
    {
        for(int i=1;i <=20;i++)
        {
            if(i%2 != 0)
            {
                cout<<i<<endl;
            }
        }
    }
    system("PAUSE");
    return 0;
    
}