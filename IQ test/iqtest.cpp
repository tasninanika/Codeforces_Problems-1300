#include<iostream>
using namespace std;

int main(){
    int n, c = 0, c2 = 0;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];

        if(arr[i] % 2 == 0){
            c++;
        }
        else{
            c2++;
        }
    }

    if(c == 1){
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 == 0){
                cout << i << endl;
            }
        }
    }
    else{
        for(int i = 0; i < n; i++){
            if(arr[i] % 2 != 0){
                cout << i << endl;
            }
        }
    }

    return 0;
}
