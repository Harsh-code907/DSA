#include<bits/stdc++.h>
using namespace std;

int main(){
  int k,l,m,n,d;

  cin>>k>>l>>m>>n>>d;

  set<int>st;

  for(int i=k;i<=d;i=i+k){
    st.insert(i);
  }

  for(int i=l;i<=d;i=i+l){
    st.insert(i);
  }

  for(int i=m;i<=d;i=i+m){
    st.insert(i);
  }

  for(int i=n;i<=d;i=i+n){
    st.insert(i);
  }

  cout<<st.size()<<endl;

  return 0;
}