#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int s = 1; s <= N - i; s++) {
            cout << "  ";
        }
        int val = i;
        int max_val = 2 * i - 1;
        cout << val;

        // increasing part (print " " then number)
        for (int j = 0; j < i - 1; j++) {
            val++;
            cout << " " << val;
        }

        // decreasing part (print " " then number)
        for (int j = 0; j < i - 1; j++) {
            val--;
            cout << " " << val;
        }

        // Move to next line
        cout << endl;
    }

    return 0;
}