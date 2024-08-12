#include <iostream>

using namespace std;

int main() {
    string letterline;
    int num_dupes;
    cin >> letterline >> num_dupes;

    for (int i = 0; i < letterline.length(); i++) {
        int same_letter = 0;
        for (int j = 0; j < letterline.length(); j++) {
            if (letterline[i] == letterline[j+i]) {
                same_letter += 1;
            }
            else break;
        }
        if (same_letter >= num_dupes) {
            letterline.erase(i,same_letter);
            i -= 1;
        }
    }
    
    cout << letterline << endl;
}