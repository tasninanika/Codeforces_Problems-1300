#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a[100001], b[100001];

        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        set<int> s;
        for(int i = 0; i < n; i++){
            cin >> b[i];
            s.insert(b[i]);
        }

        if(s.size() == 1){
            if(is_sorted(a, a+n)){
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
        else{
            cout << "Yes" << endl;
        }
    }

    return 0;
}

