#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, l, r;
        cin >> n >> l >> r;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        sort(v.begin(), v.end());

        long long c = 0;

        for (int i = 0; i < n; i++) {
            int left = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
            int right = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();
            c += (right - left);
        }

        cout << c << endl;
    }

    return 0;
}

