#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n), sorted_a(n);

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sorted_a[i] = a[i];
    }

    sort(sorted_a.begin(), sorted_a.end());


    return 0;
}
