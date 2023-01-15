#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	FILE *datoteka;
	FILE *datoteka1;
	char proizvod[25];
	float c, cs;
	int p;
	datoteka = fopen("Ducan.txt","r");
	if(datoteka == NULL)
	{
		cout<<"Greska pri otvaranju datoteke! ";
		exit(1);
	}
	datoteka1 = fopen("Snizenje.txt", "w+");
	while(!feof(datoteka))
	{
		fscanf(datoteka, "%c %d %d", &proizvod, &c, &p);
		if(p > 29)
		{
			cs = c - (c * (p / 100.0));
			fprintf(datoteka1, "%c %d" , proizvod, cs);
		}
	}
	fclose(datoteka);
	fclose(datoteka1);
	return 0;
}
