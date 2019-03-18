#include<stdio.h>
int main()
{
	int v1,v2,t,s,l;
	int i,flag=0;
	int time=l/v2;
	scanf("%d%d%d%d%d",&v1,&v2,&t,&s,&l);
	for(i=0;i<=time;i++)
	{
		if(v1*i-v2*i>t)
		{
			flag=1;
		}
	}
	if(flag)//兔子会休息 
	{
		int zong=v1*(time-s);
		if(zong>l)//兔子赢 
		{
			printf("R\n");
			printf("%d\n",l/v1+s);
		}
		else if(zong=l)//都赢 
		{
			printf("D\n");	
			printf("%d\n",l/v1+s);
		}
		else if(zong<l)	//龟赢 
		{
			printf("T\n");
			printf("%d\n",l/v2);	
		}	
    }
	if(!flag)//兔子不休息 
	{
		printf("R\n");
		printf("%d\n",l/v1);
	}
	return 0;
 } 

