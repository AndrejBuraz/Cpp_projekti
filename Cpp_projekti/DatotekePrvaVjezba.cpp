#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	FILE *datoteka;
	int x;
	datoteka = fopen("Znak.txt", "w+");
	if(datoteka == NULL)
	{
		cout<<"Greska pri otvaranju datoteke!";
		exit(1);
	}
	cout<<"Unesi broj: ";
	cin>>x;
	fprintf(datoteka, "%2d", x);
	fclose(datoteka);
	return 0;
}
