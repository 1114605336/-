#include <iostream>
using namespace std;
long long num[30][30]={0};   
long long num1[30][30]={0};
long long num2[30][30]={0};
int main()
{
	int n,m;      //n阶 m次方 
	int i,j,z;
	cin >> n >> m;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin >> num[i][j];
			num1[i][j]= num[i][j];   //对num1赋值，用于相乘 
		}
	}
	if(m==0)   //等于0的时候 
	{ 
		for(i=0;i<n;i++)
		{	
			num2[i][i] = 1;
		}	
	}
	else if(m==1)  //等于1的时候 
	{
		for(i=0;i<n;i++)
			for(j=0;j<n;j++)
				num2[i][j] = num[i][j]; 
	}
	else  //m大于1的时候 
	{
		for(int count=1;count<m;count++)  //次数 
		{
			for(i=0;i<n;i++)         
			{
				for(j=0;j<n;j++)
				{
					num2[i][j]=0;
					for(z=0;z<n;z++)
					{
						num2[i][j] += num[i][z] * num1[z][j];   //num横向,num1纵向 
					}
				}
			}
			for(int x=0;x<n;x++)
				for(int y=0;y<n;y++)
					num[x][y] = num2[x][y];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			cout << num2[i][j] << " ";

		cout << endl;
	}
	return 0;
}
