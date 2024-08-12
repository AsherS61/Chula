#include <iostream>
using namespace std;


int main() {
    string idA, idB, win;
    double gpaxA, gpaxB;
    char comA, cal1A, cal2A, comB, cal1B, cal2B;
    cin >> idA >> gpaxA >> comA >> cal1A >> cal2A >> idB >> gpaxB >> comB >> cal1B >> cal2B;

    if ((comA != 'A' || cal1A > 'C' || cal2A > 'C') && (comB != 'A' || cal1B > 'C' || cal2B > 'C')) {
        cout << "None" << endl;
    }
    else {
        if (comA != 'A' || comB != 'A') {
            if (comA == comB) {
                cout << "None" << endl;
            }
            else {
                win = comA < comB ? idA : idB;
                cout << win << endl;
            }   
        }
        
        else if (gpaxA == gpaxB) {
            if (cal1A == cal1B) {
                if (cal2A == cal2B) {
                    cout << "Both" << endl;  
                }
                else {
                    win = cal2A < cal2B ? idA : idB;
                    cout << win << endl;
                }
            }
            else {
                win = cal1A < cal1B ? idA : idB;
                cout << win << endl;
            }
        }
        else if ((cal1A >= 'D' || cal2A >= 'D') || (cal1B >= 'D' || cal2B >= 'D')) {
            if ((cal1A >= 'D' || cal2A >= 'D') && (cal1B >= 'D' || cal2B >= 'D')) {
                cout << "None" << endl;
            }
            else if (cal1A >= 'D' || cal2A >= 'D'){
                cout << idB << endl;
            }
            else if (cal1B >= 'D' || cal2B >= 'D'){
                cout << idA << endl;
            }
            else {
                cout << "None" << endl;
            }
        }
        else if (gpaxA != gpaxB) {
            win = gpaxA > gpaxB ? idA : idB;
            cout << win << endl;
        } 
        
        
        
    }
    
   
    
}