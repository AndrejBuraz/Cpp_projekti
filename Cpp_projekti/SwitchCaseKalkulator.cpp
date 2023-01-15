#include <iostream>
using namespace std;

int main()
{
	int odluka1, odluka2, odluka3;
	float prviBroj;
	unos:cout<<"Odaberi mjernju jedinicu: mm(1), cm(2), dm(3), m(4), km(5)"<<endl;
	cin>>odluka1;
	switch(odluka1)
	{
		case 1: 
		cout<<"Pretvori mm u: cm(2), dm(3), m(4), km(5)"<<endl;
		cin>>odluka2;
		switch(odluka2)
		{
			case 2:
				cout<<"Unesi mm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" mm je "<<prviBroj / 10 <<" cm."<<endl;
				break;
		
		    case 3:
				cout<<"Unesi mm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" mm je "<<prviBroj / 100 <<" dm."<<endl;
				break;
			
			case 4:
				cout<<"Unesi mm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" mm je "<<prviBroj / 1000 <<" m."<<endl;
				break;
				
			case 5:
				cout<<"Unesi mm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" mm je "<<prviBroj / 1000000 <<" cm."<<endl;
				break;
	    }
	    break;
	    
	    case 2: 
		cout<<"Pretvori cm u: mm(1), dm(3), m(4), km(5)"<<endl;
		cin>>odluka2;
		switch(odluka2)
		{
			case 1:
				cout<<"Unesi cm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" cm je "<<prviBroj * 10 <<" mm."<<endl;
				break;
		
		    case 3:
				cout<<"Unesi cm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" cm je "<<prviBroj / 10 <<" dm."<<endl;
				break;
			
			case 4:
				cout<<"Unesi cm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" cm je "<<prviBroj / 100 <<" m."<<endl;
				break;
				
			case 5:
				cout<<"Unesi cm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" cm je "<<prviBroj / 100000 <<" km."<<endl;
				break;
	    }
	    break;
	    
	    case 3: 
		cout<<"Pretvori dm u: mm(1), cm(2), m(4), km(5)"<<endl;
		cin>>odluka2;
		switch(odluka2)
		{
			case 1:
				cout<<"Unesi dm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" dm je "<<prviBroj * 100 <<" mm."<<endl;
				break;
		
		    case 2:
				cout<<"Unesi dm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" dm je "<<prviBroj * 10 <<" cm."<<endl;
				break;
			
			case 4:
				cout<<"Unesi dm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" dm je "<<prviBroj / 10 <<" m."<<endl;
				break;
				
			case 5:
				cout<<"Unesi dm: ";
				cin>>prviBroj;
				cout<<prviBroj<<" dm je "<<prviBroj / 10000 <<" km."<<endl;
				break;
	    }
	    break;
	    
	    case 4: 
		cout<<"Pretvori m u: mm(1), cm(2), dm(3), km(5)"<<endl;
		cin>>odluka2;
		switch(odluka2)
		{
			case 1:
				cout<<"Unesi m: ";
				cin>>prviBroj;
				cout<<prviBroj<<" m je "<<prviBroj * 1000 <<" mm."<<endl;
				break;
		
		    case 2:
				cout<<"Unesi m: ";
				cin>>prviBroj;
				cout<<prviBroj<<" m je "<<prviBroj * 100 <<" cm."<<endl;
				break;
			
			case 3:
				cout<<"Unesi m: ";
				cin>>prviBroj;
				cout<<prviBroj<<" m je "<<prviBroj * 10 <<" dm."<<endl;
				break;
				
			case 5:
				cout<<"Unesi m: ";
				cin>>prviBroj;
				cout<<prviBroj<<" m je "<<prviBroj / 1000 <<" km."<<endl;
				break;
	    }
	    break;
	    
	    case 5: 
		cout<<"Pretvori km u: mm(1), cm(2), dm(3), m(4)"<<endl;
		cin>>odluka2;
		switch(odluka2)
		{
			case 1:
				cout<<"Unesi km: ";
				cin>>prviBroj;
				cout<<prviBroj<<" km je "<<prviBroj * 1000000 <<" mm."<<endl;
				break;
		
		    case 2:
				cout<<"Unesi km: ";
				cin>>prviBroj;
				cout<<prviBroj<<" km je "<<prviBroj * 100000 <<" cm."<<endl;
				break;
			
			case 3:
				cout<<"Unesi km: ";
				cin>>prviBroj;
				cout<<prviBroj<<" km je "<<prviBroj * 10000 <<" dm."<<endl;
				break;
				
			case 4:
				cout<<"Unesi km: ";
				cin>>prviBroj;
				cout<<prviBroj<<" km je "<<prviBroj * 1000 <<" m."<<endl;
				break;
	    }
	    break;
	}
	cout<<"Unesi 0 za zavrsetak programa ili 1 za povratak na izbor"<<endl;
	cin>>odluka3;
	if(odluka3 == 1)
	{
		goto unos;
	}
	system("PAUSE");
	return 0;
}
