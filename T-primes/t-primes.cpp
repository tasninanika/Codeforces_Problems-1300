#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[1000000] = {0};
    for(int i = 2; i <= 1000000; i++){
        if(arr[i] == 0){
            for(int j = 2; i * j <= 1000000; j++){
                arr[i*j] = 1;
            }
        }
    }

    int n;
    cin >> n;

    long long int x, sqr;
    for(int i = 0; i < n; i++){
        cin >> x;
        sqr = sqrt(x);
        if(x == 1){
            cout << "NO" << endl;
        }
        else if(sqr * sqr == x && arr[sqr] == 0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    for(int i = 0; i < n; i++){

    }

    return 0;
}
