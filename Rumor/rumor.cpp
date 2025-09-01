#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    vector<long long> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        long long x, y;
        cin >> x >> y;
        x--;
        y--;
    }


    return 0;
}
