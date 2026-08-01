#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>num(n);

    for(int i=0;i<n;i++){
        int p;
        cin>>p;
        num[i]=p;
    }

    int start=0,end=n-1;

    int s=0,d=0;

    bool ck=0;

    while(start<=end){
      if(ck==0){
        if(num[start]>=num[end]){
            s+=num[start];
            ck=1;
            start++;
        }
        else{
            s+=num[end];
            ck=1;
            end--;
        }
      }
      else{
        if(num[start]>=num[end]){
            d+=num[start];
            ck=0;
            start++;
        }
        else{
            d+=num[end];
            ck=0;
            end--;
        }
      }
    }

    cout<<s<<" "<<d<<endl;

    return 0;
}