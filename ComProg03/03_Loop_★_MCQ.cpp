#include <iostream>
using namespace std; 

int main() {
    string key, ans;
    int score = 0;
    getline(cin,key);
    getline(cin,ans);

    if (key.length() > ans.length()) {
        cout << "Incomplete answer" << endl;
    }
    else {
        for (int i = 0; i< key.length(); i++) {
            if (key[i] == ans[i]) score += 1;
        }
        cout << score << endl;
    }
    
}