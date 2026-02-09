// #include <iostream>
// using namespace std;

// int main() {
//     int n=5;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }

//     for(int i=n-1;i>=1;i--){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=1;j<=2*i-1;j++){
//             cout<<" *";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int stars = 1;
    int tabs = N / 2;

    for (int i = 1; i <= N; i++) {
        
        // 1. Print Leading Tabs
        for (int s = 1; s <= tabs; s++) {
            cout << "\t";
        }

        // 2. Print Stars separated by Tabs
        for (int j = 1; j <= stars; j++) {
            cout << "*";
            // Only print a tab if this is NOT the last star
            if (j < stars) {
                cout << "\t";
            }
        }

        cout << endl;

        // 3. Prepare variables for the next row
        // If current row 'i' is less than the middle row index...
        if (i <= N / 2) {
            stars += 2; // Grow stars
            tabs--;     // Shrink indentation
        } else {
            stars -= 2; // Shrink stars
            tabs++;     // Grow indentation
        }
    }

    return 0;
}