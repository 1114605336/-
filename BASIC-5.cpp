#include <stdio.h>
int main(){
	int n,i,r;
	scanf("%d",&n);
	int nums[n];
	for(i=0;i<n;i++){
		scanf("%d",&nums[i]);
	}
	scanf("%d",&r);
	for(i=0;i<n;i++){
		if(nums[i]==r){
			printf("%d\n",i+1);
			break;
		}
	}
	if(i==n){
		printf("-1\n");
	}
}
