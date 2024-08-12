#include <iostream>
using namespace std;

int main() {
    string subject_id;
    bool match = false;
    getline(cin,subject_id);
    string id_list[] = { "01", "02", "51", "53", "55","58"};

    for (int i = 0; i < 6; i++) {
        if (subject_id == id_list[i]) {
            match == true; 
            break;
        } 
    } 

    if (subject_id.empty()) cout << "Error" << endl;
    else{
        if (match || (stoi(subject_id) <= 40 && stoi(subject_id) >= 20 )) cout << "OK" << endl;
        else cout << "Error" << endl;
    }
    
    
}