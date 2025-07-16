#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        map<long long, bool> seen;
        seen[0] = true;

        long long diff = 0;
        bool found = false;

        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;

            if(i % 2 == 0){
                diff += x;
            }
            else{
                diff -= x;
            }

            if(seen[diff]){
                found = true;
            }

            seen[diff] = true;
        }

        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }


    }


    return 0;
}
