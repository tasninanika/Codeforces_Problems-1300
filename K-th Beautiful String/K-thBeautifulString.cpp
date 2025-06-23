#include<iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;

        int pos1 = 0, pos2 = 0;

        for(int i = 1; i <= n; i++){
            if(k <= i){
                pos1 = n - i - 1;
                pos2 = n - k;
                break;
            }

            k -= i;
        }

        for(int i = 0; i < n; i++){
            if(i == pos1 || i == pos2){
                cout << 'b';
            }
            else{
                cout << 'a';
            }
        }
        cout << endl;
    }

    return 0;
}

