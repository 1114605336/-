#include <stdio.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int nums[n][m];
	int i=0,j=0;
	for(;i<n;i++){
		nums[i][0]=65+i;
	}
	for(i=0;i<m;i++){
		nums[0][i]=65+i;
	}
	for(i=1;i<n;i++){
		for(j=1;j<m;j++){
			nums[i][j]=nums[i-1][j-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%c",nums[i][j]);
		}
		printf("\n");
	}
}
