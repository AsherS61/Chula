#include <iostream>
using namespace std;

int main() {
    int number_of_countries;
    cin >> number_of_countries;
    string country_name[number_of_countries];
    int country_fee[number_of_countries];
    int dash_position[100];

    for (int i = 0; i < number_of_countries; i++) {
        cin >> country_name[i];
        cin >> country_fee[i];
    }

    string country_landing;
    getline(cin >> ws, country_landing);
    
    int count_dash = 0;
    for (int i = 0; i < country_landing.length(); i++) {
    if (country_landing[i] == '-') {dash_position[count_dash] = i; count_dash += 1; }
    }
    
    string country_landing_list[count_dash];
    
    for (int i = 0; i < count_dash; i++) {
        country_landing_list[i] = country_landing.substr(dash_position[i]+1,2);
    }

    int sum = 0;

    for (int i = 1; i < count_dash; i++) {
        if (country_landing_list[i] != country_landing_list[i-1]) {
            for (int j = 0; j < number_of_countries; j++) {
                if (country_landing_list[i] == country_name[j]) {sum += country_fee[j]; break;}
            }
        } 
    }

    cout << sum << endl;
    
}