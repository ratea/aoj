#include "bits/stdc++.h"
using namespace std;

int main(){
	double a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f){
		double y=(a*f-d*c)/(a*e-d*b);
		double x=(c-b*y)/a;
		
		cout<<fixed<<setprecision(3)<<x<<" "<<y<<endl;
	}
	return 0;
}