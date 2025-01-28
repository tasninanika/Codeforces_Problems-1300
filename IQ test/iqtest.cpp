#include<iostream>
using namespace std;

int main(){
    int n;
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

    return 0;
}
