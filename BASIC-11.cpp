#include <stdio.h>
#include <string.h>
#include <math.h>
int main(){
	char nums[8];
	gets(nums);
	int i=0;
	long long sum=0;
	int length=strlen(nums);	
	while(nums[i]){
		if(nums[i]>='0'&&nums[i]<='9'){
			nums[i]-=48;
		}
		else{
			nums[i]-=55;
		}
		i++;
	}
	i=length;
	for(;i>0;i--){
		sum+=nums[i-1]*pow(16,length-i);
	}
	printf("%I64d\n",sum);
}
