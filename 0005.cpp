#include "bits/stdc++.h"
using namespace std;

int gcd(int a,int b){
	while(1){
		if(a<b)swap(a,b);
		if(!b)break;
		a%=b;
	}
	return a;
}

int main(){
	long long int a,b;
	while(cin>>a>>b){
		long long int ans = gcd(a,b);
		cout<<ans<<" "<<(a*b)/ans<<endl;
	}
	return 0;
}