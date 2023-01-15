#include <iostream>
 using namespace std;
 
 int main() {
	int a[100], i, n, zbroj = 0, *pa; // deklaracija pokazivaca *pa
	cout<<"Unesi koliko brojeva želiš unijeti";
	cin>>n;
	pa = &a[0]; //adresa pokazivaca pa se dodjeljuje prvom elementu polja a
	for (i = 0; i < n; i++) {
		cout<<"Unesi broj";
		cin>>*pa; //spremanje vrijednosti na mjesto koje varijabla *pa pokazuje
		zbroj = zbroj+(*pa);//vrijednost na koju pokazuje *pa se zbraja sa prijasnjom sumom
		}
		
cout<<"Zbroj je"<<zbroj<<endl;
system("PAUSE");
return 0;}

