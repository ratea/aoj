#include "bits/stdc++.h"
using namespace std;

int main(){
	int a,b;
	while(cin>>a>>b){
		int n=a+b;
		int ans=0;
		while(n>0){
			n/=10;
			ans++;
		}
		if(ans==0)ans++;
		cout<<ans<<endl;
	}
	return 0;
}