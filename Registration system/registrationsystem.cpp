#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    string arr[n];
    for(int i = 0; i < n; i++){
        cin >> s;

            if (arr[s] == 0) {
                arr[s] = 1;
                cout << "OK" << endl;
            }
            else if (i == 1) {
                cout << s << arr[s] << endl;
                arr[s]++;
            }
    }



    return 0;
}
