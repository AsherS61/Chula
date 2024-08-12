#include <iostream>
#include <string>
#include <cmath>
using namespace std;

long gcd(long a, long b) {
 if (b == 0) return a;
 return gcd(b, a%b);
}

int main() {
    string digit,decimal, repeat;
    cin >> digit >> decimal >> repeat;
    for (int i = 0; i < 5; i++){
        decimal += repeat;
    }

    string number = digit +"."+ decimal;

    
}