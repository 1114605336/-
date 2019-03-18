#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];int i,j,k,l;
    char b[20][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    char c[20][10]={"","","shi","bai","qian","wan","shi","bai","qian","yi","shi"};
 	gets(a);
    l=strlen(a);
    if(a[0]=='1'){
    	if(l==2||l==6||l==10) printf("%s",c[l]);
    	else printf("%s %s",b[a[0]-48],c[l]);
	}
	else{
		printf("%s %s",b[a[0]-48],c[l]);
	} 
    for(i=1;i<l;i++){
    	j=a[i]-48;
    	if(j==0){
    		if(l-i==9||l-i==5){
    			if((i>=3&&a[i-3]!=48)||(i>=2&&a[i-2]!=48)||(i>=1&&a[i-1]!=48))
    				printf(" %s",c[l-i]);
    			if(a[i+1]!=48) printf(" ling");
			}
			else if(a[i+1]!=48&&i<l-1){
			printf(" ling");
			}
		}									
		else{
			printf(" %s %s",b[j],c[l-i]);
		}    	    	   	
    } 
	printf("\n");
    return 0;
}
