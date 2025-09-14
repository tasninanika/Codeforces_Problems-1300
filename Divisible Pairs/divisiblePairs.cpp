#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        map<long long, map<long long, long long>> mp;
        long long ans = 0;

        for(int i = 0; i < n; i++){
            long long key1 = (x - v[i] % x) % x;
            long long key2 = v[i] % y;
            ans += mp[key1][key2];
            mp[v[i] % x][key2]++;
        }
    }


    return 0;
}
