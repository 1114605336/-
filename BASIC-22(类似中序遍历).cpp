#include<stdio.h>
void f(int a)					//用递归的方法 
{
	if(a==0)printf("%c",'A');	//递归出口 
	else 
	{
		f(a-1);					//从相似性中看出可以应用递归 
		printf("%c",a+'A');		// ASCII表述字母 
		f(a-1);					//相似性中看出可以应用递归
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
