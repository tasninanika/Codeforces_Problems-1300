#include<iostream>
using namespace std;

int main(){
    int n, s;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> s;

            if (arr[s] == 0) {
                arr[s] = 1;
                cout << "OK" << endl;
            }
            else if (i == 1) {
                if (arr[i] == arr[i - 1]) {
                    cout << arr[i] + "1" << endl;
                } else {
                    cout << "OK" << endl;
                }
            }
            else {
                if (arr[i] == arr[i - 1] && arr[i] == arr[i - 2]) {
                    cout << arr[i] + "11" << endl;
                }
                else if (arr[i] == arr[i - 1] || arr[i] == arr[i - 2]) {
                    cout << arr[i] + "1" << endl;
                }
                else {
                    cout << "OK" << endl;
                }
            }
    }



    return 0;
}
