#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b,c;
		cin>>a>>b>>c;
		a*=a;
		b*=b;
		c*=c;
		if(a+b==c||a==b+c||a+c==b){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}