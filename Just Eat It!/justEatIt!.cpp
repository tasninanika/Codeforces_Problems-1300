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

        cur = 0;
        for(int i = 0; i < k - 1; i++){
            cur += a[i];
            max_sum = max(max_sum, cur);
            if(cur < 0){
                cur = 0;
            }
        }

        if(max_sum >= total){
            cout << "NO" << endl;
        }
        else{

        }
    }


    return 0;
}
