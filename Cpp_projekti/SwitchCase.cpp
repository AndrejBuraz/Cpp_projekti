#include <iostream>
using namespace std;
int main (){
    int arapski_broj;
    cout<<"Upisi arapski broj: ";
    cin>>arapski_broj;
    switch (arapski_broj)
    {
        case 1: cout<<"Vrijednost u rimskom brojevnom sustavu je: I"<<endl;
        break;
        case 10: cout<<"Vrijednost u rimskom brojevnom sustavu je: X"<<endl;
        break;
        case 50: cout<<"Vrijednost u rimskom brojevnom sustavu je: L"<<endl;
        break;
        case 100: cout<<"Vrijednost u rimskom brojevnom sustavu je: C"<<endl;
        break;
        case 500: cout<<"Vrijednost u rimskom brojevnom sustavu je: D"<<endl;
        break;
        case 1000: cout<<"Vrijednost u rimskom brojevnom sustavu je: M"<<endl;
        break;
    }
    
    system("Pause");
	return 0;
}

