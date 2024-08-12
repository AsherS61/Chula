#include <iostream>
#include <cmath>

using namespace std;

// Get Highest Value in Inputted Array
int highest(int num[], int num_max) {

    int num_highest = 0;
    for (int i = 0; i <= num_max; i++) {
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

    int correct_positions[num_inputs];
    for (int i = 0; i < num_inputs; i++) {correct_positions[i] = num[i];}
    for (int i = num_inputs-1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (correct_positions[j] > correct_positions[i]) swap(correct_positions[j],correct_positions[i]);
        }
    }


    while (true) {
        // Check if in the correct order
        bool arranged = true;
        for (int i = 0; i < num_inputs; i++) {
            cout << num[i] << " ";
            if (!(correct_positions[i] == num[i])) arranged = false;
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

            double end = -1; 
            for (int i = 0; i <= first_wrong_position; i++) {
                if (end != -1) {

                    int highest_wrong_number = end;

                    if (end == 0) {
                        int k = first_wrong_position;
                        for (int j = 0; j < ((double)first_wrong_position)/2; j++) {
                            swap(num[j],num[k]);
                            k--;
                        }
                        break;
                    }
                    else {
                        end = end/2;
                        // Swap Positions
                        for (int j = 0; j < end ; j++) {
                            swap(num[j],num[highest_wrong_number]);
                            highest_wrong_number--;
                        }
                        
                        for (int j = 0; j < num_inputs; j++) {cout << num[j] << " ";}
                        cout << endl;

                        // Flip the whole pancake
                        int temp = first_wrong_position;
                        for (int j = 0; j < ((double)first_wrong_position)/2; j++) {
                            swap(num[j],num[temp]);
                            temp--;
                        }
                        break;
                    }
                }

                if (num_highest == num[i]) {end = i;}
            }
        }
    }
}