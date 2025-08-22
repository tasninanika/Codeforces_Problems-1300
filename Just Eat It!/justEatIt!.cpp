#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        vector<long long> a(k);
        long long total = 0;

        for(int i = 0; i < k; i++){
            cin >> a[i];
            total += a[i];
        }

        long long max_sum = LLONG_MIN;
        long long cur = 0;
    }


    return 0;
}
