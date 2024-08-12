#include <iostream>

using namespace std;

int main() {
    char number[10] = {'0','1','2','3','4','5','6','7','8','9'};
    string input;
    string ans;
    getline(cin, input);
    int match = 0;

    for (int i = 0; i < 10; i++) {
        bool found = false;
        for (int j = 0; j < input.length(); j++) {
            if (input[j] == number[i]) {
                found = true; 
                match++;
                break;
            }
        }
        if (!found) ans += to_string(i) + ",";
    }
    
    if (match == 10) cout << "None";
    else {ans.pop_back();cout << ans;}
    cout << endl;
}