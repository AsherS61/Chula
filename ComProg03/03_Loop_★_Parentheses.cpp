#include <iostream>

using namespace std;

int main() {
    string input;
    getline(cin,input);

    for (int i = 0; i< input.length(); i++) {
        if (input[i] == '(') input.replace(i,1,"[");
        else if (input[i] == ')') input.replace(i,1,"]");
        else if (input[i] == '[') input.replace(i,1,"(");
        else if (input[i] == ']') input.replace(i,1,")");
    }

    cout << input << endl;
}