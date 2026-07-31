#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    int time=240-k;

    int i=1;

    for(i=1;i<=n;i++){
     if(time-5*i<0){
        cout<<i-1<<endl;
        break;
     }
     time-=5*i;
    }

    if(i>n) cout<<n<<endl;

    return 0;

}