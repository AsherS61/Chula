#include <iostream>
using namespace std;

int main() {
    int input_amount;
    string name;
    string first_name[] = {"Robert", "William", "James", "John", "Margaret", "Edward", "Sarah", "Andrew", "Anthony", "Deborah"};
    string nick_name[]  = {"Dick", "Bill","Jim", "Jack", "Peggy", "Ed","Sally", "Andy","Tony", "Debbie"};
    cin >> input_amount;

    for (int i = 0 ; i < input_amount; i++) {
        bool found = false;
        cin >> name;
        for (int j = 0; j < sizeof(first_name) / sizeof(string); j++) {
            if (first_name[j] == name) {cout << nick_name[j]; cout << endl; found = true; break;}
            else if (nick_name[j] == name) {cout << first_name[j]; cout << endl; found = true; break;}
        }
        if (!found) {cout << "Not found" << endl;}
        
    }
}