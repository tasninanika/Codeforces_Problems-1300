#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string grid[9];

        for(int i = 0; i < 9; i++){
            cin >> grid[i];
        }

        for(int i = 0; i < 9; i++){
            for(int j = 0; j < 9; j++){
                if(grid[i][j] == '2'){
                    grid[i][j] = '1';
                }
            }
        }

        for(int i = 0; i < 9; i++){
            cout << grid[i] << endl;
        }
    }

    return 0;
}

