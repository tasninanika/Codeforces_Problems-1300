#include<iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            if( j == 0){
                cout << "OK" << endl;
            }
            else if(arr[0] == arr[1]){
                cout << arr[1]+"1" << endl;
            }
        }
    }



    return 0;
}
