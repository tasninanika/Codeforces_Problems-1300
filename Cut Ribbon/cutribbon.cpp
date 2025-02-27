#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    int maxPieces = 0;

    for (int i = 0; i * a <= n; i++) {
        for (int j = 0; i * a + j * b <= n; j++) {
            int remaining = n - (i * a + j * b);
            if (remaining % c == 0) {
                int z = remaining / c;
                maxPieces = max(maxPieces, i + j + z);
            }
        }
    }

    cout << maxPieces << endl;
    return 0;
}
