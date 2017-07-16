#include "bits/stdc++.h"
using namespace std;

int main(){
	int a='a'-'A';
	
	string s;
	getline(cin,s);
	
	for(int i=0;i<s.size();i++){
		if(s[i]>='a'&&s[i]<='z')s[i]-=a;
	}
	cout<<s<<endl;
	
	return 0;
}