#include <iostream>

using namespace std;

string* DMU_PrintNumbers() {
    static string numbers = "1234567890";
    return &numbers;
}

int main() {
    string* numbers = DMU_PrintNumbers();
    cout << *numbers << endl;
    return 0;
}
