#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;

    long long x[a], y[b];

    for(long long i = 0; i < a; i++){
        cin >> x[i];
    }

    for(long long i = 0; i < b; i++){
        cin >> y[i];
    }

    sort(x, x + a);

    for(long long i = 0; i < b; i++){
        cout << upper_bound(x, x + a, y[i]) - x << " ";
    }
    return 0;
}
