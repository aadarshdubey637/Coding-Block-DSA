#include <iostream>
using namespace std;
int binary_To_decimal(int binary){
    int decimal=0,base=1;
    while(binary>0){
        int x=binary%10;
        decimal=decimal+x*base;
        base=base*2;
        binary=binary/10;
    }
    return decimal;
}
int main() {
    int binary;
    cin>>binary;
    cout<<binary_To_decimal(binary);
    return 0;
}