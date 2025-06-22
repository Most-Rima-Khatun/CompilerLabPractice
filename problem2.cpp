#include <iostream>
#include <cctype>
#include <string>
#include <set>
#include <sstream>
using namespace std;

// Function to check if a character is a vowel
bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    string str = "Munmun is the student of Computer Science & Engineering";

    int vowelCount = 0, consonantCount = 0;
    set<char> vowelsFound, consonantsFound;

    // Count vowels and consonants
    for (char ch : str) {
        if (isalpha(ch)) {
            if (isVowel(ch)) {
                vowelCount++;
                vowelsFound.insert(tolower(ch));
            } else {
                consonantCount++;
                consonantsFound.insert(tolower(ch));
            }
        }
    }

    // Divide words into two categories
    string vowelWords = "";
    string consonantWords = "";

    istringstream iss(str);
    string word;
    while (iss >> word) {
        char firstChar = tolower(word[0]);
        if (isalpha(firstChar)) {
            if (isVowel(firstChar)) {
                vowelWords += word + " ";
            } else {
                consonantWords += word + " ";
            }
        }
    }

    // Output results
    cout << "Original String: \"" << str << "\"\n\n";

    cout << "(a) Number of vowels: " << vowelCount << endl;
    cout << "    Number of consonants: " << consonantCount << endl;

    cout << "\n(b) Vowels found: ";
    for (char v : vowelsFound)
        cout << v << " ";
    cout << "\n    Consonants found: ";
    for (char c : consonantsFound)
        cout << c << " ";

    cout << "\n\n(c)\n";
    cout << "Words starting with vowels: " << vowelWords << endl;
    cout << "Words starting with consonants: " << consonantWords << endl;

    return 0;
}