#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long factors[2];
        int c = 0;

        for (long long i = 2; i * i < n && c < 2; i++) {
            if (n % i == 0) {
                factors[c++] = i;
                n /= i;
            }
        }

        if (c != 2 || n == factors[0] || n == factors[1] || n == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            cout << factors[0] << " " << factors[1] << " " << n << endl;
        }
    }

    return 0;
}
