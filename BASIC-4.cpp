#include <stdio.h>
int main(){
	int n,max,min,sum=0,i=0;
	scanf("%d",&n);
	int nums[n];
	for(;i<n;i++){
		scanf("%d",&nums[i]);
	}
	max=nums[0];
	min=nums[0];
	for(i=0;i<n;i++){
		if(nums[i]>max){
			max=nums[i];
		}
		if(nums[i]<min){
			min=nums[i];
		}
		sum+=nums[i];
	}
	printf("%d\n%d\n%d\n",max,min,sum);
}
