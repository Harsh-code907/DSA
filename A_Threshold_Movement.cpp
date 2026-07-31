#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin>>n;

        vector<int>w(n+1);

        for(int i=1;i<=n;i++)
            cin>>w[i];

        if(n%2){
            cout<<"NO\n";
            continue;
        }

        int mxeven=0;
        int minodd=INT_MAX;

        for(int i=1;i<=n;i++){
            if(i%2)
                minodd=min(minodd,w[i]);
            else
                mxeven=max(mxeven,w[i]);
        }

        if(minodd-mxeven>=2) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}