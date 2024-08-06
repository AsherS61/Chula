#include <iostream>
#include <string>

using namespace std;

int main() {
    string s = "asdf";
    cout << "The string is " << s << endl;
    cout << "Please enter your name: "; cin >> s;
    cout << "Your name is " << s << endl;

    string s1, s2;
    cout << "Please enter two words: "; cin >> s1 >> s2;
    cout << "The first word is: " << s1 << endl;
    cout << "The second word is: " << s2 << endl;

    int a1,a2;
    cout << "Please enter two numbers: "; cin >> a1 >> a2;
    cout << "The first number is: " << a1 << endl;
    cout << "The second number is: " << a2 << endl;
    cout << "The sum is: " << a1 +a2 << endl;
}