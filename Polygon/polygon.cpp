#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; i++) cin >> grid[i];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    if (i != n - 1 && j != n - 1 && grid[i+1][j] == '0' && grid[i][j+1] == '0') {
                        cout << "NO\n";
                        goto next_case;
                    }
                }
            }
        }
        cout << "YES\n";
        next_case:;
    }
    return 0;
}
