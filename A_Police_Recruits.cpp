#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int police=0,crime=0;

    for(int i=0;i<n;i++){
        int t;
        cin>>t;

        if(t>0) police+=t;
        if(t<0 && police<=0) crime++;
        if(t<0 && police>0) police--; 
    }

    cout<<crime<<endl;

    return 0;
}