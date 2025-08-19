#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<pair<int,int>> v;
        v.push_back({1, a[0]});
        for(int i = 1; i < n; i++){
            if(a[i] != v.back().second){
                v.push_back({i + 1, a[i]});
            }
        }

        int q;
        cin >> q;

        while(q--){
            int l, r;
            cin >> l >> r;

            auto it = upper_bound(v.begin(), v.end(), make_pair(l, INT_MAX));
            if(it == v.end() || it->first > r){

            }
        }
    }

    return 0;
}
