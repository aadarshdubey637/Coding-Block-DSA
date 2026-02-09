#include <iostream>
using namespace std;

int main() {
    int n1=4;
    int n2=6;
    int start=max(n1,n2);
    while(true){
        if(start%n1==0 && start%n2==0){
            cout<<start;
            break;
        }
        start++;
    }
    return 0;
} 