#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int first;
    cin>>first;

    int ans=0;

    int mini=first,maxi=first;

    for(int i=1;i<n;i++){
        int p;
        cin>>p;

        if(p<mini){
            ans++;
            mini=p;
        }

        if(p>maxi){
            ans++;
            maxi=p;
        }

    }

    cout<<ans<<endl;

    return 0;

}