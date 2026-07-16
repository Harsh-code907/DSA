#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int>ans(n);

    for(int i=0;i<n;i++){
         int p;
         cin>>p;
         ans[p-1]=i+1;
    }

    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }

    cout<<endl;

    return 0;
}