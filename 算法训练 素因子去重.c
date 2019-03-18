#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	long long n,p = 1;
	cin>>n;
	for(long long i=2; i<=n;i++){
		if(n%i==0){
			p*=i;
			while(n%i==0){
			n /= i;
			}
		}
	} 	 
	cout<<p<<'\n';
	return 0;
}

