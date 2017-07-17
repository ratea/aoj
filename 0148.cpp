#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	while(cin>>n){
		cout<<"3C";
		int a=n%39;
		if(a==0)a=39;
		if(a<10)cout<<0;
		cout<<a<<endl;
	}
	return 0;
}