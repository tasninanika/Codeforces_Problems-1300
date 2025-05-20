#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int a = -1, b = -1;

        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                a = i;
                n /= i;
                break;
            }
        }

        for(int i = a + 1; i * i <= n; i++){
            if(n % i == 0){
                b = i;
                n /= i;
                break;
            }
        }

        if(a != -1 && b != -1 && n > 1 && n != a && n != b){
            cout << "YES" << endl;
            cout << a << " " << b << " " << n << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }


    return 0;
}
