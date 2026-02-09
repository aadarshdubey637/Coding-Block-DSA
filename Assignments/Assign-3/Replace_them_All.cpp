// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;
//     long long result=0;
//     long long place=1;
//     if(n==0){
//         cout<<5<<endl;
//         return 0;
//     }
//     while(n>0){
//         int digit=n%10;

//         if(digit==0){
//             digit=5; 
//         }
//         result=result+(digit*place);
//         place*=10;
//         n=n/10;
//     }
//     cout<<result<<endl;
//     return 0;
// }
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    string n;
    cin >> n;

    for (int i = 0; i < n.length(); i++) {
        if (n[i] == '0') {
            n[i] = '5';
        }
    }

    cout << n << endl;
    return 0;
}