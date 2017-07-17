#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	while(cin>>n){
		if(n==0)break;
		int ans=0;
		while(n!=1){
			if(n%2==0){
				n/=2;
			}else{
				n*=3;
				n++;
			}
			ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}