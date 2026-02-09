#include <iostream>
using namespace std;

int main() {
    int a;
    cin>>a;
    int b;
    cin>>b;
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    cout<<a;
    return 0;
}