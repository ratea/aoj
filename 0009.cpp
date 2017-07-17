#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	while(cin>>n){
		vector<bool> a(n+1,true);
		for(int i=2;i<=n+1;i++){
			if(a[i]){
				for(int j=i*2;j<n+1;j+=i){
					a[j]=false;
				}
			}
		}
		int ans=0;
		for(int i=2;i<n+1;i++){
			if(a[i])ans++;
		}
		cout<<ans<<endl;
	}
	return 0;
}