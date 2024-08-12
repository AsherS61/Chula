#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int array_size;
    cin >> array_size;
    string array_card[array_size], cuts;

    for (int i = 0; i < array_size; i++) {cin >> array_card[i];}
    getline(cin >> ws, cuts);

    for (int i = 0; i < cuts.length(); i++) {
        if (cuts[i] == 'C') {
            for (int j = 0; j < array_size/2; j++) {
                swap(array_card[j],array_card[j+array_size/2]);
            }
        }
        else if (cuts[i] == 'S') {
            string temp[array_size];
            copy(array_card,array_card+array_size,temp);
            int odd_swap = 0, even_swap = 1;
            for (int j = 1; j < array_size -1; j++) { 
                if (j % 2 == 1) {
                    array_card[j] = temp[array_size/2+odd_swap];
                    odd_swap++;
                }
                else {
                    array_card[j] = temp[even_swap];
                    even_swap++;
                }
            }
        }
    }

    for (int i = 0; i < array_size; i++) {
        cout << array_card[i] << " ";
    }
    cout << endl;
}