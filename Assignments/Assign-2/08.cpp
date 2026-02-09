
// #include <iostream>
// using namespace std;

// int main() {
//     int n = 4;

//     for (int i = 1; i <= n; i++) {

//         // Left part
//         for (int j = 1; j <= i; j++) {
//             cout << j << " ";
//         }

//         // Middle spaces
//         int spaces = 2 * (n - i);
//         for (int s = 1; s <= spaces; s++) {
//             cout << "  ";
//         }

//         // Right part
//         for (int j = i; j >= 1; j--) {
//             cout << j << " ";
//         }

//         cout << endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }

        int spaceCount = 2 * (N - i) - 1;
        for (int s = 0; s < spaceCount; s++) {
            cout << "  ";
        }

        int startValue = (i == N) ? (i - 1) : i;
        for (int j = startValue; j >= 1; j--) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}

