#include<stdio.h>
void f(int a)					//�õݹ�ķ��� 
{
	if(a==0)printf("%c",'A');	//�ݹ���� 
	else 
	{
		f(a-1);					//���������п�������Ӧ�õݹ� 
		printf("%c",a+'A');		// ASCII������ĸ 
		f(a-1);					//�������п�������Ӧ�õݹ�
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	f(a-1);
	printf("\n");
	return 0;
}
