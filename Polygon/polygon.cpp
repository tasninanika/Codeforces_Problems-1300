#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> grid(n);
        for(int i = 0; i < n; i++){
            cin >> grid[i];

        bool ok = true;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == '1') {
                    if (i == n - 1 || j == n - 1)
                        continue;
                    if (grid[i+1][j] == '0' && grid[i][j+1] == '0') {
                        ok = false;
                    }
                }
            }
        }
        if(ok){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}

