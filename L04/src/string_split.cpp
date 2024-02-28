#include <iostream>

using namespace std;

string* DMU_split(char const* s, char c) {
    const int MAX_SUBSTRINGS = 100;
    string* result = new string[MAX_SUBSTRINGS];
    
    int index = 0;
    string current;

    for (int i = 0; s[i] != '\0'; ++i) {
        if (s[i] == c) {
            if (!current.empty()) {
                result[index++] = current;
                current.clear();
            } 
        } else {
            current += s[i];
        } 
    }

    if (!current.empty()) {
        result[index++] = current;
    }

    return result;
}

int main() {
    const char* input_string = "abe,ko,so";
    char delimiter = ',';
    string* substrings = DMU_split(input_string, delimiter);
    
    for (int i = 0; i < 3; i++) {
        cout << substrings[i] << "\n";
    }

    return 0;
}
