#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string prev, cur;
    int count = 0;

    for (int i = 0; i < n; i++) {
        cin >> cur;

        if (i == 0 || cur != prev)
            count++;

        prev = cur;
    }

    cout << count << endl;

    return 0;
}