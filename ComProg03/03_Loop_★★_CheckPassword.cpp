#include <iostream>
using namespace std;

int main() {

    string pass;
    while (getline(cin,pass)) {
        bool upper = false, lower = false, number = false, special = false;
        for (int i = 0; i < pass.length(); i++) {
            if (isupper(pass[i])) upper = true;
            else if (islower(pass[i])) lower = true;
            else if (isdigit(pass[i])) number = true;
            else special = true;
        }

        if (pass.length() >= 12 && upper && lower && number && special) cout << ">> strong" << endl;
        else if (pass.length() >= 8 && upper && lower && number) cout << ">> weak" << endl;
        else cout << ">> invalid" << endl;
    }

}