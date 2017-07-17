#include "bits/stdc++.h"
using namespace std;

int main(){
	int n;
	while(1){
	cin>>n;
		if(n==0)break;
	vector<vector<int> > a(n+1,vector<int>(n+1));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	cout<<" ";
	for(int i=0;i<n;i++){
		int b=0;
		
		for(int j=0;j<n;j++){
			cout<<"  "<<a[i][j]<<" ";
			b+=a[i][j];
		}
		cout<<" "<<b<<endl<<" ";
	}
	
	int d=0;
	
	for(int i=0;i<n;i++){
		int c=0;
		for(int j=0;j<n;j++){
			c+=a[j][i];
		}
		cout<<" "<<c<<" ";
		d+=c;
	}
	cout<<" "<<d<<endl;
	}
	return 0;
}