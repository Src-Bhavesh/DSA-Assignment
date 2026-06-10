// Previous Smaller


#include <bits/stdc++.h>
using namespace std;
int main(){

  int n ;
  cin>>n;

  vector<int>v(n);
  for(int i=0; i<n; i++){
    cin>>v[i];
  }

  vector<int>ans(n,-1);

  stack<int>st;

  for(int i=0; i<n; i++){
    while(!st.empty() && st.top()>v[i])st.pop();
    if(!st.empty())ans[i]=st.top();
    st.push(v[i]);
  }

  for(auto x : ans){
    cout<<x<<" ";
  }

  return 0;
}