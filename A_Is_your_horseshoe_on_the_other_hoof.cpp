#include<bits/stdc++.h>
using namespace std;

int main(){
    int n=4;

    set<long long>st;

    for(int i=0;i<n;i++){
        long long s;
        cin>>s;
        st.insert(s);
    }

    cout<<n-st.size()<<endl;

    return 0;
}