#include <iostream>
#include <math.h>
#define KAMATA 0.15

using namespace std;

int main()
{
 float suma, suma1god, suma2god, suma3god;
 cout<<"Upisi sumu novca koja je u banci: ";
 cin>>suma;
 suma1god=suma+(suma*KAMATA);
 suma2god=suma1god+(suma1god*KAMATA);
 suma3god=suma2god+(suma2god*KAMATA);
 cout<<"Nakon tri godine u banci ce biti "<<suma3god<<" kn";
 return 0;
}
