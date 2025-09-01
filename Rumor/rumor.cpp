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
        long long t = min(a[x], a[y]);
        a[x] = t;
        a[y] = 0;
    }

    long long res = 0;
    for(int i = 0; i < n; i++){
        res += a[i];
    }



    return 0;
}
