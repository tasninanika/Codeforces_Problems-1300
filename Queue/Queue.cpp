#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> t(n);
    for(int i = 0; i < n; i++){
        cin >> t[i];
    }

    sort(t.begin(), t.end());


    return 0;
}
