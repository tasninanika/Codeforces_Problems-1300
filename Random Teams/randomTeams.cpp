#include<iostream>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    long long max_friends = (n - m + 1) * (n - m) / 2;
    long long b = n / m;
    long long c = n % m;
    long long min_friends = (m - c) * (b * (b - 1) / 2) + c * (b * (b + 1) / 2);

    cout << min_friends << " " << max_friends << endl;

    return 0;
}
