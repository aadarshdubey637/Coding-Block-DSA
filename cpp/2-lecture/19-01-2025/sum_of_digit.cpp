#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter value:";
    cin>>n;
    int sum=0;
   int reverse=0;
    while(n!=0){
        int digit=n%10;
        reverse=digit+reverse*10;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}