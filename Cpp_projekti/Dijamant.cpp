#include <iostream>
using namespace std;

int main()
{
	int n, m, i, j, x,y, rez, br1 = 0, br2=0, z, br3 = 0;
	cin>>n>>m;
	char polje[n][m];
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			cin>>polje[i][j];
		}
	}
	
	for(i = 0; i < n; i++)
	{
		for(j = 0; j < m; j++)
		{
			if(polje [i][j] == '#' && polje[i+1][j] == '.')
			{
				do
				{
					br1++;
					x = i;
					x++;
				}while(polje[x][j] == '.' || x < n)
				dijamant:for(x = i - 1; x < br1; x--)
				{
					for(z = j + 1; z < ; z++)
					{
						if(polje[x][z] == '#')
						{
							do
							{
								y = z;
								br2++;
								if(polje[x][y++] == '#')
								{
									if(br2 != 1)
									{
										goto nijeDijamant;
									}
									if(br2 == 1 && br3 == 1)
									{
										goto dijamant;
									}
								}
							}while(polje[x][y] == '.');
						}
					}
				}
				
			}
		}
	}
	cout<<rez;
	
	
	//for(i = 0; i < n; i++)
	//{
	//	for(j = 0; j < m; j++)
	//	{
	//		cout<<polje[i][j];
	//	}
	//	cout<<endl;
	//}
	return 0;
}
