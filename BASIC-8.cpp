#include <stdio.h>
int main(){
	int i=1000,t,reversal;
	for(;i<=9999;i++){
		reversal=0;
		t=i;
		while(t>0){
			reversal=reversal*10+t%10;
			t/=10;
		}
		if(reversal==i){
			printf("%d\n",i);
		}
	} 
} 
