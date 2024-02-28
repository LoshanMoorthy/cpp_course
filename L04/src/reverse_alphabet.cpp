#include <iostream>

using namespace std;

string* DMU_ReverseAlphabet() {
    static string reverse_alphabet =
        "å, ø, æ, z, y, x, w, v, u, t, s, r, q, p, o, n, m, l, k, j, i, h, g, f, e, d, c, b, a";
    return &reverse_alphabet;
}

int main() {
    string* reverse_alphabet = DMU_ReverseAlphabet();
    cout << *reverse_alphabet << endl;
    return 0;
}
