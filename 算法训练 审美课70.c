#include <stdio.h>
int main(int argc, char *argv[]) {
	int n,m;
	scanf("%d%d",&n,&m);
	int nums[n][m];
	int i=0,j=0,a=0,sum=0,flag=0;
	for (;i<n;i++) {
		for (j=0;j<m;j++) {
			scanf("%d",&nums[i][j]);
		}
	}
	for(i=0;i<n-1;i++){
		for(a=i+1;a<n;a++){
			for(j=0;j<m;j++){
				if((nums[i][j]^nums[a][j])==0){
					break;
				}
			}
			if(j==m){
				sum++;
			}
		}
	}
	printf("%d\n",sum);
}