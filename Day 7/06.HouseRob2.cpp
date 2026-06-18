#include <iostream>
using namespace std;
 int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }
  vector<int>dp1(n,0);
  dp1[0]=v[0];
  dp1[1]=max(v[0],v[1]);
  for(int i=2; i<=n-1; i++){
    int f = v[i]+dp1[i-2];
    int s = dp1[i-1];
    dp1[i]=max(f,s);
  }

  vector<int>dp2(n,0);
  dp2[0]=v[1];
  dp2[1]=v[2];
  for(int i=2; i<=n; i++){
    int f = v[i+1]+dp2[i-2];
    int s = dp2[i-1];
    dp2[i]=max(f,s);
  }

  cout<<max(dp1[n-2],dp2[n-2])<<endl;


  return 0;
 }