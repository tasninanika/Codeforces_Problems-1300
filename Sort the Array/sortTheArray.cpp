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

    int l = 0, r = n - 1;

    while (l < n && a[l] == sorted_a[l]) l++;

    while (r >= 0 && a[r] == sorted_a[r]) r--;

    if (l >= r) {

    return 0;
}
