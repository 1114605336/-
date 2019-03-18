#include <stdio.h>
int main(){
    int m,n;
    int i,j;
    int cnt = 0;
    int x[200][200];
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
        for(j=0; j<n; j++)
            scanf("%d",&x[i][j]);
    i=0; j=0;
    while(cnt<m*n){
        while(x[i][j]>-1&&i<m){
            printf("%d ",x[i][j]);
            x[i][j]=-1;
            i++;cnt++;
        }
        i--;j++;
        while(x[i][j]>-1&&j<n){
            printf("%d ",x[i][j]);
            x[i][j]=-1;
            j++;cnt++;
        }
        i--;j--;
        while(x[i][j]>-1&&i>=0){
            printf("%d ",x[i][j]);
            x[i][j]=-1;
            i--;cnt++;
        }
        i++;j--;
        while(x[i][j]>-1&&j>=0){
            printf("%d ",x[i][j]);
            x[i][j]=-1;
            j--;cnt++;
        }
        j++;i++;
    }
    return 0;
}
