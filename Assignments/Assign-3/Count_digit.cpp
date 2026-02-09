#include <iostream>
using namespace std;

int main() {
    int  n=5433231;
    int k=5;
    int count=0;
    while(n>0){
        int digit=n%10;
        if(digit==k){
            count++;
        }
        n=n/10;

    }
    cout<<count;
    return 0;
}