#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> ans;
        string s = to_string(n);

        int place = 1;
        for (int i = 1; i < s.size(); i++)
            place *= 10;

        for (int i = 0; i < s.size(); i++) {
            int digit = s[i] - '0';

            if (digit != 0)
                ans.push_back(digit * place);

            place /= 10;
        }

        cout << ans.size() << "\n";

        for (int x : ans)
            cout << x << " ";

        cout << "\n";
    }

    return 0;
}