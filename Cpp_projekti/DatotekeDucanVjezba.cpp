#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	string ime[6];
	float cijena[6], postotak[6], novo;
	int i;
	ifstream ulaz ("Ducan.txt");
	ofstream izlaz ("Snizenje.txt");
	for(i = 0; i < 6; i++)
	{
		ulaz >> ime[i];
		ulaz >> cijena[i];
		ulaz >> postotak[i];
	}
	for(i = 0; i < 6; i++)
	{
		if(postotak[i] > 29)
		{
			izlaz << ime[i] <<" ";
			novo = (cijena[i] - (cijena[i] * (postotak[i] / 100)));
			izlaz << novo;
			izlaz << "\n";
		}
	}
	
	return 0;
}
