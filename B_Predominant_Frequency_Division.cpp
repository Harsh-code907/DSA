#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        vector<int> prefLeft(n), prefMid(n);

        int one = 0, two = 0, three = 0;

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) one++;
            else if (a[i] == 2) two++;
            else three++;

            prefLeft[i] = one - two - three;

            prefMid[i] = one + two - three;
        }

        vector<int> sufMax(n, INT_MIN);

        sufMax[n - 2] = prefMid[n - 2];

        for (int i = n - 3; i >= 0; i--)
            sufMax[i] = max(sufMax[i + 1], prefMid[i]);

        bool ok = false;

        for (int i = 0; i <= n - 3; i++) {

            if (prefLeft[i] >= 0) {

                if (sufMax[i + 1] >= prefMid[i]) {
                    ok = true;
                    break;
                }
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}