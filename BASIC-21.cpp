#include <stdio.h>
#include<math.h> 
void f(int n){
	int i;  
    for(i=1;i<=n;i++){
		printf("sin(");
		printf("%d",i);
        if(n>1&&i<n){ 
			if((i+1)%2==0)printf("-"); 
        	else printf("+");  
		}
	}
	for(i=0;i<n;i++)printf(")");  
}
void f2(int n){
	int i;
	for(i=0;i<n-1;i++)
    	printf("(");
    for(i=1;i<=n;i++){
    	f(i);   
		if(i<n)printf("+%d)",n+1-i);   
    	else printf("+%d",n+1-i);    
    }
}
    int main(){
    int n,i,j;
    scanf("%d",&n);
    f2(n);
    return 0;
}
