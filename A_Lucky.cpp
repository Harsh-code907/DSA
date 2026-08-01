#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
      string s;
      cin>>s;

      int sum=0;

      for(int i=0;i<6;i++){
        if(i<3){
            sum+=(s[i]+'0');
        }
        else sum-=(s[i]+'0');
      }

      if(sum==0) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;

   }

    return 0;
}