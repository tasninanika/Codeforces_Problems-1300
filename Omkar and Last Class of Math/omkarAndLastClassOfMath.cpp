#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long x = 1;

        for(long long i = 2; i * i <= n; i++){
            if(n % i == 0){
                if(i > x){
                    x = i;
                }
                if(n / i > x){
                    x = n / i;
                }
            }
        }

        long long y = n - x;

        cout << x << " " << y << endl;
    }

    return 0;
}

