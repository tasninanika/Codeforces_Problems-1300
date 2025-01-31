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
        for(int j = 0; j < n; j++){
            if( i == 0){
            cout << "OK" << endl;
            }
            else if(arr[i] == arr[i+1]){

            }
        }
    }

    return 0;
}
