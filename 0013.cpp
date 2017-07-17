#include "bits/stdc++.h"
using namespace std;

int main(){
	stack<int> s;
	int a;
	while(cin>>a){
		if(a!=0){
			s.push(a);
		}else{
			cout<<s.top()<<endl;
			s.pop();
		}
	}
	return 0;
}