#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(){
        int n,i,j,r=0;
        int a[3000];
        memset(a,0,sizeof(a));//�����鸳��ֵ0
        a[0]=1;
        scanf("%d",&n);
    
        for(i=1;i<=n;i++){//ģ������ ��������˵��ڸ���λ�����
                for(j=0;j<3000;j++){
                        int s = a[j]*i+r;  //ģ������Ĺ��̣���Ȼ���涼��0��ҲҪ��  
                        r = s/10; //��λ�����м���10����λ 
                        a[j] = s%10;//��λ���� 
                    }
            }
        for(i=3000-1;i>=0;i--){
                if(a[i])
                        break; //�鿴һ������λ ���� 
            }
        for(j=i;j>=0;j--)
                printf("%d",a[j]); //��� 
        return 0; 
}
