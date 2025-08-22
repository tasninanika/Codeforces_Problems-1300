#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int k;
        cin >> k;

        long long sum = 0, sum1 = 0, c = 0;
        long long maxx = -2147483647, maxCount = 0;
        vector<long long> a(k+1);

        for(int i = 1; i <= k; i++){
            cin >> a[i];
            sum += a[i];
            sum1 += a[i];
            c++;
            if (sum1 <= 0) {
                sum1 = 0;
                cnt = 0;
            }
            if (maxx < sum1) {
                maxCount = c;
                maxx = sum1;
            }
        }

        if(sum == maxx && maxCount == k){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
