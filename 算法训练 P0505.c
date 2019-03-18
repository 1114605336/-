#include <stdio.h>

int main(int argc, char *argv[]) {
	int n;
	scanf("%d",&n);
	long long t=n,mod=1e10;
	while(--n){    //注意是--n
		t=t*n%mod; //计算阶乘，太大的时候取模
		while(t%10==0){   //这一步去除t末尾的0
			t/=10;
		}
	}
	printf("%lld\n",t%10); //由上一步去掉末尾所有0，所以输出取模即可
	return 0;
}