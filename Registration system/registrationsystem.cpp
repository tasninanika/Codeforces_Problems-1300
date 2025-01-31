#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        if( i == 0){
            cout << "OK" << endl;
        }
    }

    return 0;
}
