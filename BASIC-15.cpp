#include <stdio.h>
#include <string.h>
using namespace std;
int main() 
{
	char str1[11],str2[11];
	scanf("%s",str1);
	scanf("%s",str2);
	if(strlen(str1) != strlen(str2))
	{
		printf("1");
	}
	else if(!strcmp(str1,str2))
	{
		printf("2");
	}
	else if(!strcmp(strlwr(str1),strlwr(str2))) //strlwr:Сд 
	{
		printf("3");
	}
	else
	{
		printf("4");
	}	
	return 0;
}
