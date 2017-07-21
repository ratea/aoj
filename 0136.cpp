#include<iostream>
using namespace std;
#include<vector>

int main(){
  int n;
  cin>>n;
  vector<int> nx(6,0);
  for(int i=0;i<n;i++){
    double h;
    cin>>h;
    int a=(h-160)/5;
    nx[a]++;
  }
  for(int i=0;i<6;i++){
    cout<<i+1<<":";
    for(int j=0;j<nx[i];j++)cout<<"*";
    cout<<endl;
  }
  return 0;
}
