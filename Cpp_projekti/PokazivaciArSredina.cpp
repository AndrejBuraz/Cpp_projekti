#include <cstdlib>
#include <iostream>

using namespace std;

float arit(int *pa) //funckija dobiva pokazivac *pa iz programa main()
{
	int i, zbroj = 0;
	float ar;
	for (i = 0; i < 5; i++)
	{
        cin>>*pa;//spremanje vrijednosti na mjesto koje varijabla *pa pokazuje
		zbroj = zbroj+(*pa);//vrijednost na koju pokazuje *pa se zbraja sa prijasnjom sumom
	}
	ar = zbroj / 5.0;
	return ar;
	}
	
int main(){
	int i, a[5], *pa; //deklaracija pokazivaca *pa
	float ars;
	pa = &a[0];//adresa pokazivaca pa se dodjeljuje prvom elementu polja a
	ars = arit(pa);//poziva se funkcija arit, šalje se pokazivac pa
	cout<<"Aritmetièka sredina je "<<ars<<endl;
	system("PAUSE");
	return 0;}

