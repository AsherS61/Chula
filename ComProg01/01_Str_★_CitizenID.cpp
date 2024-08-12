#include <iostream>
#include <string>
using namespace std;

int main() {
    string id;
    int sum_id = 0, multiplier = 13;
    cin >> id;
    for (int i = 0; i < id.length(); i++) {
        sum_id += ((id[i]) - 48) * multiplier;
        multiplier--;
    }
    int check_digit = (11 - (sum_id % 11)) % 10;
    cout << id[0] << "-" << id.substr(1,4) << "-" << id.substr(5,5) << "-" << id.substr(10,2) << "-" << check_digit << endl;
}