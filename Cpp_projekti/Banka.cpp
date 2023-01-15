#include <iostream>
#include <math.h>
using namespace std;

#define KAMATA 0.15

int main()
{
	float novac, novac3God, novac1God, novac2God;
	cout<<"Unesi kolicinu novca: ";
	cin>>novac;
	novac1God = novac + (novac * KAMATA);
	novac2God = novac1God + (novac1God * KAMATA);
	novac3God = novac2God + (novac2God * KAMATA);
	cout<<"Kolicina novca nakon 5 godina je: "<<novac3God<<endl;
	system("PAUSE");
	return 0;
}
