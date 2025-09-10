#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;

    while(t--) {
        int n, m;
        cin >> n >> m;

        vector<int> k(n);
        for(int i = 0; i < n; ++i)
            cin >> k[i];

        vector<ll> c(m+1);
        for(int j = 1; j <= m; ++j)
            cin >> c[j];

        sort(k.begin(), k.end(), greater<int>());

        ll ans = 0;
        int p = 1;
        for(int i = 0; i < n; ++i){
            int ki = k[i];

            if(p <= m && p <= ki && c[p] < c[ki]){
                ans += c[p];
                ++p;
            }
            else {
                ans += c[ki];
            }
        }
        cout << ans << endl;
    }
    return 0;
}

