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
	if(flag)//���ӻ���Ϣ 
	{
		int zong=v1*(time-s);
		if(zong>l)//����Ӯ 
		{
			printf("R\n");
			printf("%d\n",l/v1+s);
		}
		else if(zong=l)//��Ӯ 
		{
			printf("D\n");	
			printf("%d\n",l/v1+s);
		}
		else if(zong<l)	//��Ӯ 
		{
			printf("T\n");
			printf("%d\n",l/v2);	
		}	
    }
	if(!flag)//���Ӳ���Ϣ 
	{
		printf("R\n");
		printf("%d\n",l/v1);
	}
	return 0;
 } 

