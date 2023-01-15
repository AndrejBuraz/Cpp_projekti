#include <iostream>
using namespace std;

int main()
{
	int n, i, j, a;
	char A[4][4] = {{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'},{'.','.','.','.'}};
	char B[4][4] = {{'#','#','#','#'},{'#','.','.','#'},{'#','.','.','#'},{'#','#','#','#'}};
	char C[4][4] = {{'.','.','.','.'},{'.','#','#','.'},{'.','#','#','.'},{'.','.','.','.'}};
	char D[4][4] = {{'#','#','#','#'},{'#','#','#','#'},{'#','#','#','#'},{'#','#','#','#'}};
	cin>>n;
	char polje[n];
	for(i = 0; i<n; i++)
	{
		cin>>polje[i];
	}
	//char razultat[n][4*n];
	for(i = 0; i<4; i++)
	{
		for(j = 0; j<n; j++)
		{
			switch(polje[j])
			{
				case 'A':
					for(a = 0; a<4;a++)
					{
						cout<<A[i][a];
					}
					break;
				
				case 'B':
					for(a = 0; a<4;a++)
					{
						cout<<B[i][a];
					}
					break;
				
				case 'C':
					for(a = 0; a<4;a++)
					{
						cout<<C[i][a];
					}
					break;
				
				case 'D':
					for(a = 0; a<4;a++)
					{
						cout<<D[i][a];
					}
					break;
			}
		}
		cout<<endl;
	}
	return 0;
}
