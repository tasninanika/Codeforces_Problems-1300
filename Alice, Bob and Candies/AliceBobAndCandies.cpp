#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }

        int alice = 0, bob = 0;
        int i = 0, j = n - 1;
        int moves = 0;
        int last = 0;
        int turn = 0;
        int current = 0;

        while(i <= j){
            current = 0;

            if(turn == 0){
                while(i <= j && current <= last){
                    current += v[i];
                    i++;
                }
                alice += current;
            }
            else{
                while(j >= i && current <= last){
                    current += v[j];
                    j--;
                }
                bob += current;
            }
            last = current;
            moves++;
            turn = 1 - turn;
        }
        cout << moves << " " << alice << " " << bob << endl;
    }


    return 0;
}
