#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> cnt[10];
        for(int i = 0; i < n; i++){
            long long x;
            cin >> x;

            int r = x % 10;
            if((int)cnt[r].size() < 3){
                cnt[r].push_back(r);
            }

            vector<int> vals;
            for (int d = 0; d < 10; d++) {
                for (int j = 0; j < (int)cnt[d].size(); j++) {
                    vals.push_back(cnt[d][j]);
                }
            }

            int sz = vals.size();
            int found = 0;
        }
    }


}
