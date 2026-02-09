#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n;
    int count = 0;

    // count number of digits
    int temp = n;
    while(temp > 0) {
        count++;
        temp /= 10;
    }

    // calculate Armstrong sum
    temp = n;
    int sum = 0;
    while(temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, count);
        temp /= 10;
    }

    return sum == original;
}

int main() {
    int n;
    cin >> n;

    if(isArmstrong(n)) {
        cout << "true";
    } else {
        cout << "false";
    }

    return 0;
}
