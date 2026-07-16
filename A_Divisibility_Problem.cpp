#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        long long a,b;
        cin>>a>>b;

        if(a%b==0){
            cout<<0<<endl;
        }

        else{
            long long c=a%b;
            c=b-c;
            cout<<c<<endl;
        }
    }

    return 0;
}