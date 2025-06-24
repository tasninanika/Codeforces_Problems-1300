#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int cnt[26] = {0};

    for(int i = 0; i < s.size(); i++){
        cnt[s[i] - 'a']++;
    }

    int odd = 0;

    for(int i = 0; i < 26; i++){
        if(cnt[i] % 2 == 1){
            odd++;
        }
    }

    if(odd == 0 || odd % 2 == 1){
        cout << "First" << endl;
    }
    else{
        cout << "Second" << endl;
    }

    return 0;
}
