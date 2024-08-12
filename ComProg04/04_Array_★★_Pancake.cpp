#include <iostream>
#include <cmath>
using namespace std;

// Get the Correct Arrangement of the Array by Ascending Order
int get_correct_positions(int num[], int num_inputs) {

    int positions[num_inputs];
    for (int i = num_inputs-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (num[j] > num[i]) swap(num[j],num[i]);
        }
    }

    return * positions;
}

// Get Highest Value in Inputted Array
int highest(int num[], int num_max) {

    int num[num_max + 1];
    int num_highest = num[0];
    for (int i = 1; i <= num_max; i++) {
        num_highest = max(num_highest,num[i]);
    }

    return num_highest;

}

int main() {
    
    // Declare Variables
    int num_inputs;
    cin >> num_inputs;
    int num[num_inputs];
    for (int i = 0; i < num_inputs; i++) cin >> num[i];
    int correct_positions[] = get_correct_positions(num,num_inputs);


    while (true) {
        // Check if in the correct order
        bool arranged = true;
        for (int i = 0; i < num_inputs; i++) {
            if (i > 0 && num[i] < num[i-1]) {arranged = false;}
            cout << num[i] << " ";
        }
        cout << endl;

        
        if (arranged) break;
        else {
            
            // How many are already arranged correctly counting from the last digit in Array
            // match = number of digits already in the correct order from last
            int match = 0;
            for (int i = num_inputs - 1; i >= 0; i--) {
                if (correct_positions[i] == num[i]) match += 1;
                else break;
            }

            // first_wrong_position = position of first wrong variable
            int first_wrong_position = num_inputs - match - 1;

            // num_highest = value of the highest number that is wrong
            int num_highest = highest(num, first_wrong_position);

            int end = -1; 
            for (int i = 0; i <= first_wrong_position; i++) {
                if (num_highest == num[i]) int end = i;
                if (end != -1) {
                    int highest_wrong_number = end;

                    // Swap Positions
                    for (int j = 0; j < round(end/2) ; j++) {
                        swap(num[j],num[highest_wrong_number]);
                        highest_wrong_number--;
                    }

                    // Swap Highest(Top) With Bottom
                    swap(num[0],num[first_wrong_position]);
                }
            }
        }
    }
}