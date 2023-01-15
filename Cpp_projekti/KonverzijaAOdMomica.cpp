#include <iostream>
using namespace std;

int main()
{
 int sati, sekunde;
 do
 {
 cout<<"Unesi sate koje zelis konvertirati: ";
 cin>>sati;	
 sekunde=sati*3600;
  cout<<"Uneseni sati konvertirane u sekunde su: "<<sekunde<<" s."<<endl;	
 }
 while(sati!=0);		
 return 0;	
}
