#include <iostream>

using namespace std;

void ft_is_negative(int n) {
    if (n < 0)
        cout << "N" << endl;
    else
        cout << "P" << endl;
}

int main() {
    ft_is_negative(10);
    ft_is_negative(-10);
}
