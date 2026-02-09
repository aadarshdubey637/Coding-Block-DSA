#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n;
    cin>>n;
    int pos=1;
    int inv=0;
    while(n>0){
        int digit=n%10;
        inv=inv+pos*(int)pow(10,digit-1);
        pos++;
        n=n/10;
    }
    cout<<inv;
    
    return 0;
}