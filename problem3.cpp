#include <iostream>
using namespace std;

int main() {
    string code = "CSE-3141";

    // Extract parts
    string dept = "Computer Science & Engineering";
    char year = code[4], sem = code[5], course = code[6], type = code[7];

    // Mappings
    string years[] = {"", "1st year", "2nd year", "3rd year", "4th year"};
    string semesters[] = {"", "1st semester", "2nd semester"};
    string courses[] = {"", "Structured Programming", "Data Structures", "Algorithms", "Compiler Design", "Operating Systems"};
    string types[] = {"", "Theory", "Lab"};

    // Convert chars to index
    int y = year - '0', s = sem - '0', c = course - '0', t = type - '0';

    // Output result
    cout << dept << ", " << years[y] << ", " << semesters[s] << ", "
         << courses[c] << ", " << types[t] << "." << endl;

    return 0;
}
