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

    long long current_time = 0;
    int c = 0;

    for(int i = 0; i < n; i++){
        if(current_time <= t[i]){
            c++;
            current_time += t[i];
        }
    }

    cout << c << endl;

    return 0;
}
