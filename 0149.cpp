#include "bits/stdc++.h"
using namespace std;

int main(){
	vector<int> l(4,0);
	vector<int> r(4,0);
	
	double a,b;
	while(cin>>a>>b){
		if(a>=1.1){
			l[0]++;
		}else if(a>=0.6){
			l[1]++;
		}else if(a>=0.2){
			l[2]++;
		}else{
			l[3]++;
		}
		
		if(b>=1.1){
			r[0]++;
		}else if(b>=0.6){
			r[1]++;
		}else if(b>=0.2){
			r[2]++;
		}else{
			r[3]++;
		}
	}
	
	for(int i=0;i<4;i++)cout<<l[i]<<" "<<r[i]<<endl;
	
	return 0;
}