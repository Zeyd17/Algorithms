#include <iostream>
using namespace std;

int main()
{
	int p[5] = {0,1,2,5,6};
	int wt[5] = {0,2,3,4,5};
	int m=9,n=4;
	int K[5][9];
	
	for(int i=0;i<=n;i++)
	{
		for(int w=0;w<=m;w++)
		{
			if(i==0||w==0)
			K[i][w]=0;
			
			else if(wt[i]<=w)
			K[i][w]=max(K[i-1][w],K[i-1][w-wt[i]]+p[i]);
			
			else
			K[i][w]=K[i-1][w];
		}
	}
	cout<<K[n][m];
}

