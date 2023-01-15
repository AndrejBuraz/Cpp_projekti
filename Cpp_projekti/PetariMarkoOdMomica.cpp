#include <iostream>
using namespace std;

int main() 
{
 int MRezultat, PRezultat, MZbroj=0, PZbroj=0;
 cout<<"Unesi Markova tri rezultata!"<<endl;
 for(int i = 0;i<3;i++){
 	cin>>MRezultat;
 	MZbroj=MZbroj+MRezultat;
 }
 cout<<"Unesi Petrova tri rezultata!"<<endl;
 for(int i = 0;i<3;i++){
 	cin>>PRezultat;
 	PZbroj=PZbroj+PRezultat;
 }
 if(PZbroj>MZbroj){
 	cout<<"Petar je pobijedio!";
}
 if(PZbroj<MZbroj)
{
	cout<<"Marko je pobijedio!";
}
 else
{
	cout<<"Izjednaceno je :/";
}
 
 return 0;
}
