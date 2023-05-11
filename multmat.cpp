#include<iostream>
using namespace std;

int main()
{
	int a[3][3],b[3][3],c[3][3],i,j,k,s;
	
	
	cout<<"Enter the elements of matrix 1"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>a[i][j];
		}
	}
		cout<<"Enter the elements of matrix 2"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cin>>b[i][j];
		}
	}
		cout<<" matrix 1"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
		cout<<" matrix 2"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<b[i][j];
		}
		cout<<endl;
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			c[i][j]=0;
			for(k=0;k<3;k++)
			{
				c[i][j] += b[k][i]*a[i][j];
			}
		}
	}
		cout<<"The product of matrix is:"<<endl;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			cout<<" "<<c[i][j];
		}
		cout<<endl;
	}
}
