#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n+1);
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }

        vector<int> good;
        for(int i = 1; i <= n; i++){
            if(a[i] < i){
                good.push_back(i);
            }
        }

        long long ans = 0;
        for(int j = 1; j <= n; j++){

        }

        cout << ans << endl;
    }

    return 0;
}
