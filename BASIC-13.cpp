#include <stdio.h>
int main(){
	int a,t,i,j;
	scanf("%d",&a);
	int nums[a];
	for(i=0;i<a;i++){
		scanf("%d",&nums[i]);
	}
	for(i=0;i<a-1;i++){
		for(j=i+1;j<a;j++){
			if(nums[i]>nums[j]){
				t=nums[i];
				nums[i]=nums[j];
				nums[j]=t;
			}
		}
	} 
	for(i=0;i<a;i++){
		printf("%d ",nums[i]);
	}
}
