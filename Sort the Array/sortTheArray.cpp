#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int l = 0, r = n - 1;

    while(l < n - 1 && a[l] <= a[l + 1]){
        l++;
    }
    if(l == n - 1){
        cout << "yes" << endl;
        cout << "1 1" << endl;
        return 0;
    }

    while(r > 0 && a[r - 1]){
        r--;
    }

    reverse(a.begin(), a.end() + r + 1);

    return 0;
}
