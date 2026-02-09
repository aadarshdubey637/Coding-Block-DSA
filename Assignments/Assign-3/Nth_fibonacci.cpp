#include <iostream>
using namespace std;
int fibonacci(int n){
    int a=1, b=0,c;
    for(int i=0;i<n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return b;
} 
int main() {
    int n=10;
    cout<<fibonacci(n);
    
    return 0;
}