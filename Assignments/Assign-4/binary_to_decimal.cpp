#include <iostream>
using namespace std;

int binaryToDecimal(string binary) {
    int decimal = 0;

    for (int i = 0; i < binary.length(); i++) {
        decimal = decimal * 2 + (binary[i] - '0');
    }

    return decimal;
}

int main() {
    int N;
    cin >> N;

    while (N--) {
        string binary;
        cin >> binary;

        cout << binaryToDecimal(binary) << endl;
    }

    return 0;
}