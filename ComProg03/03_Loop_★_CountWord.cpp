#include <iostream>
#include <string>
using namespace std;

int main() {
    string word,sentence,temp;
    int match = 0;
    getline(cin,word);
    getline(cin,sentence);
    
    for (int i = 0; i < sentence.length(); i++) {
        if (!isalpha(sentence[i]) && !iswspace(sentence[i])) {sentence.replace(i,1," "); i-=1;}
    }
    for (int i = 0; i < sentence.length() - word.length() + 1; i++) {
        if (iswspace(sentence[i])) {
            if (i == sentence.length() - word.length() - 1) {
                sentence.substr(i+1,word.length()) == word ? match += 1 : match += 0 ;
            }
            else if (sentence.substr(i+1,word.length()) == word && iswspace(sentence[i+1+word.length()])) match += 1;
        }
        else if (i == 0 && sentence.substr(i,word.length()) == word && iswspace(sentence[i+word.length()])) match += 1;
    }

    cout << match << endl;
}