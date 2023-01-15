#include <iostream>
#include <math.h>
using namespace std;
/*
void sarrusovo(int matrix[3][3])
{
	int D = (matrix[0][0] * matrix[1][1] * matrix[2][2]) + (matrix[0][1] * matrix[1][2] * matrix[2][0]) + (matrix[0][2] * matrix[1][0] * matrix[2][1]) - (matrix[2][0] * matrix[1][1] * matrix[0][2]) - (matrix[2][1]*matrix[1][2]*matrix[0][0]) - (matrix[2][2]*matrix[1][0]*matrix[0][1]);
	cout << "Rezultat je: "<<D<<endl;
}*/

int Laplaceov(int matrix[50][50], int stupanj)
{
	int i, j, x, D = 0, podmatrica[50][50];
	if(stupanj == 2)
	{
		/*int novaMatrica[3][3];
		for(i = 0; i < stupanj; i++)
		{
			for(j = 0; j < stupanj; j++)
			{
				novaMatrica[i][j] = matrix[i][j];
				
			}
		}
		sarrusovo(novaMatrica);*/
		return((matrix[0][0] * matrix[1][1]) - (matrix[1][0] * matrix[0][1]));
			
	}
	else
	{
		for( x = 0; x < stupanj; x++){
			int podi = 0;
			for( i = 1; i < stupanj; i++){
				int podj = 0;
				for(j = 0; j < stupanj; j++){
				if(j == x)
				{
					continue;
				}
				podmatrica[podi][podj] = matrix[i][j];
				podj++;
				}
			podi++;
			}
			D = D + (pow(-1, x) * matrix[0][x] * Laplaceov(podmatrica, stupanj - 1 ));
		}
	}
	return D;
}




int main()
{
	int i, j, redDeterminante;
	cout<<"Unesi red determinante: ";
	cin>>redDeterminante;
	int matrica[50][50];
	for(i = 0; i < redDeterminante; i++)
	{
		for(j = 0; j < redDeterminante; j++)
		{
			cout<<"Unesi broj za "<<i+1<<". red i "<<j+1<<". stupac: ";
			cin>>matrica[i][j];
		}
	}/*
	for(redDeterminante; redDeterminante > 2; redDeterminante--)
	{
		if(redDeterminante == 3)
		{
			int novaMatrica[3][3];
			for(i = 0; i < redDeterminante; i++)
			{
				for(j = 0; j < redDeterminante; j++)
				{
					novaMatrica[i][j] = matrica[i][j];
				}
			}
			int rez = sarrusovo(novaMatrica);
			cout<<"Rezultat je: "<<rez<<endl;
		}
	}*/
	
	
	
	
	
	
	
	
	
	//ispis
	cout<<"Vasa matrica je: "<<endl;
	for(i = 0; i < redDeterminante; i++)
	{
		for(j = 0; j < redDeterminante; j++)
		{
			cout<<matrica[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl<<"Rezultat je: "<<Laplaceov(matrica, redDeterminante)<<endl;
	system("PAUSE");
	return 0;
}


