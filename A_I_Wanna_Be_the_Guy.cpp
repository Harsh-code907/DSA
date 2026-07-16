#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<bool> check(n + 1, false);

    int n1;
    cin >> n1;

    for(int i = 0; i < n1; i++) {
        int p;
        cin >> p;
        check[p] = true;
    }

    int n2;
    cin >> n2;

    for(int i = 0; i < n2; i++) {
        int q;
        cin >> q;
        check[q] = true;
    }

    bool ck = true;

    for(int i = 1; i <= n; i++) {
        if(!check[i]) {
            ck = false;
            break;
        }
    }

    if(ck)
        cout << "I become the guy." << endl;
    else
        cout << "Oh, my keyboard!" << endl;

    return 0;
}