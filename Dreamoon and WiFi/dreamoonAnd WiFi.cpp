#include<iostream>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    int x = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '+'){
            x++;
        }
        else{
            x--;
        }
    }

     cin >> s;

    int y = 0, z = 0;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '+'){
            y++;
        }
        else if (s[i] == '-'){
            y--;
        }
        else{
            z++;
        }
    }

    int diff = x - y + z;
    double ans = 0.0;

    return 0;
}
