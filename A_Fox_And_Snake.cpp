#include<bits/stdc++.h>
using namespace std;

int main(){
  int n,m;
  cin>>n>>m;

  bool pos=0;

  for(int i=0;i<n;i++){
    string s;
        if(i%2==0){
          for(int j=0;j<m;j++) s+='#';
        }
        else{
            if(pos==0){
             for(int j=0;j<m-1;j++) s+='.';
             s+='#';
             pos=1;
            }
            else{
                s+='#';
             for(int j=1;j<m;j++) s+='.';
             pos=0;
            }
        }
        cout<<s<<endl;
  }

  return 0;
}