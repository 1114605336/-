#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int main(){
        int n,i,j,r=0;
        int a[3000];
        memset(a,0,sizeof(a));//给数组赋初值0
        a[0]=1;
        scanf("%d",&n);
    
        for(i=1;i<=n;i++){//模拟手算 两乘数相乘等于各个位数相乘
                for(j=0;j<3000;j++){
                        int s = a[j]*i+r;  //模拟手算的过程，虽然后面都是0但也要乘  
                        r = s/10; //进位数，有几个10进几位 
                        a[j] = s%10;//本位的数 
                    }
            }
        for(i=3000-1;i>=0;i--){
                if(a[i])
                        break; //查看一共多少位 高手 
            }
        for(j=i;j>=0;j--)
                printf("%d",a[j]); //输出 
        return 0; 
}
