#include<iostream>
using namespace std;

int main(){
    string s;
    cin >> s;

    int x = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '+'){
            x++;
        }
        else{
            x--;
        }
    }

     cin >> s;

    int y = 0, z = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '+'){
            y++;
        }
        else if (s[i] == '-'){
            y--;
        }
        else{
            z++;
        }
    }

    int diff = x - y + z;
    double ans = 0.0;

    if (diff >= 0 && diff % 2 == 0) {
        int k = diff / 2;
        if (k <= z) {
            long long res = 1;
            for (int i = 1; i <= k; i++) {
                res = res * (z - i + 1) / i;
            }
            ans = (double)res / pow(2, z);
        }
    }

    cout << fixed << setprecision(15) << ans << "\n";


    return 0;
}
