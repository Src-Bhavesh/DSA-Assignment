#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  vector<int>v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }



  vector<int>dp(n+1,0);
  dp[0]=v[0];
  dp[1]=max(v[0],v[1]);

  for(int i=2; i<n; i++){
    int f = v[i]+dp[i-2];
    int s = dp[i-1];
    dp[i]=max(f,s);
  }
  cout<<dp[n-1]<<endl;
  return 0;
}