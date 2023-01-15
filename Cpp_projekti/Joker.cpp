#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int s1[6], s2[6], s3[6], joker[6], i, j;
	string a, b;
	for(i = 0; i<6; i++)
	{
		cin>>joker[i];
		for(j = 0; joker[i] > 10; j++)
		{
			joker[i] = joker[i] - 10;
		}
	}
		std::string str;
    	for (int v: joker) 
		{
        	b += std::to_string(v);
    	}
	cin>>a;
	cout<<b[0];
	if(a[0] == b[0])
	{
		cout<<"abc";
	}

	return 0;
	
	
}
