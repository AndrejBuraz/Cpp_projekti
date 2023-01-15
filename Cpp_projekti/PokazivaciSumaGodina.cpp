 #include<iostream>
 
 
using namespace std;
int main()
{
	int  godine[5];
    int *p; //deklaracija pokazivaca p
    int sum=0, i;
    p=&godine[0]; //adresa pokazivaca p se dodjeljuje prvom elementu polja godine
    for(i=0;i<5;i++)
    {
        cout<< “Unesi godine ucenika " << endl;
        cin>> *p; //spremanje vrijednosti na mjesto koje varijabla *p pokazuje
        sum=sum+(*p); //vrijednost na koju pokazuje *p se zbraja sa prijasnjom sumom
    }
    cout << “Suma godina je " << sum << endl;
    cout << “Godine zadnjeg ucenika su : " << *p  << endl;
    return(0);
}

