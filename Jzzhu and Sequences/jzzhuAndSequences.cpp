#include<iostream>
using namespace std;

int main(){
    long long a, b, t;
    cin >> a >> b >> t;

    long long result;

    int pos = (t - 1) % 6;

    if(pos == 0){
        result = a;
    }
    else if(pos == 1){
        result = b;
    }
    else if(pos == 2){
        result = b - a;
    }
    else if(pos == 3){
        result = -a;
    }
    else if(pos == 4){
        result = -b;
    }
    else{
        result = a - b;
    }

    int MOD = 1000000007;
    result = (result % MOD + MOD) % MOD;

    cout << result << endl;

    return 0;
}
