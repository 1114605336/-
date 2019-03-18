#include <stdio.h>

using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	if(n<=0){
		return 0;
	}
	int nums[n],j,max=0,sum=0,flag=0,a=0;
	int i=0;
	for(;i<n;i++){
		scanf("%d",&nums[i]);//输入
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(nums[j]==nums[i]){
				sum++;	
				a++;
				if(a==1){
					flag=nums[j];
				}
			}
		}
		if((sum>max)&&(nums[i]<flag)){
			max=sum;
			flag=nums[i];
		}
		sum=0;
	}	
	printf("%d\n",flag);
}