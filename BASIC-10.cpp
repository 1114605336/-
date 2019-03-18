#include <stdio.h>
int main(){
	long long n;
	int t,i=0;
	char nums[100];
	scanf("%lld",&n);
	if(n==0){
		printf("0\n");
		return 0;
	}
	while(n){
		t=n%16;
		if(t>=10){
			t+=55;
		}
		else{
			t+=48;
		}
		nums[i]=t;
		i++;
		n/=16;
	}
	i-=1;
	while(i>=0){
		printf("%c",nums[i]);
		i--;
	}
	printf("\n");
}
