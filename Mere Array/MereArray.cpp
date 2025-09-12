
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n), b(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b.begin(), b.end());

        long long mn = *min_element(a.begin(), a.end());

        int ok = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if (a[i] % mn != 0) {
                    ok = 0;
                    break;
                }
            }
        }

        if(ok == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

