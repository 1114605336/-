#include <stdio.h>
int main()
{
	int i,n,num;
	int sum,reversal;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=10000;i<1000000;i++)
		{
			num=i;                                    //����ÿ����λ����λʮ������ 
			sum=0,reversal=0;                         //ÿλ����֮�����������������ֵ0 
			while(num>0)
			{
				reversal=reversal*10+num%10;	      //��������  ���� 
				sum+=(num%10);                        //��λ���룬�ӵ�λ��ʼ�ۼ� 
				num/=10;
			}
			if(sum==n && reversal==i)                 //һ�����ĸ�λ����֮�͵���n���ǻ������������ 
				printf("%d\n",i);
		}
	}
	return 0;
}