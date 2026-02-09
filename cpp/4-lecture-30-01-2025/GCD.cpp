#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout<<"Enter a:";
    cin>>a;
    cout<<"Enter b:";
    cin>>b;
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    cout<<"GCD="<<a;
    return 0;
}