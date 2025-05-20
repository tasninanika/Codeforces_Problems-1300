#include<iostream>
using namespace std;

int main(){
    long long n, m;
    cin >> n >> m;

    long long max_friends = (n - m + 1) * (n - m) / 2;
    long long b = n / m, c = n % m;

    return 0;
}
