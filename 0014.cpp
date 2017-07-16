#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	while(cin>>n){
		int ans=0;
		for(int i=1;i*n<600;i++){
			ans+=(i*n)*(i*n)*n;
		}
		cout<<ans<<endl;
	}
	return 0;
}