#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int tri[n][n];
	int i=0,j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			tri[i][j]=0;
		}
	}
	for(i=0;i<n;i++){
		tri[i][0]=1;
	}
	for(i=1;i<n;i++){
		for(j=1;j<n;j++){
			tri[i][j]=tri[i-1][j]+tri[i-1][j-1];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(tri[i][j]){
				printf("%d ",tri[i][j]);
			}
		}
		printf("\n");
	}
}
