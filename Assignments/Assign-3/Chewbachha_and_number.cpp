#include <iostream>
using namespace std;

int main() {
    string x;
    cin>>x;

    for(int i=0;i<x.length();i++){
        int digit=x[i]-'0';
        int inver=9-digit;
         
         if(i==0 && inver==0){
            continue;
         }
        int finaldigit=min(digit,inver);
        x[i]=finaldigit+'0';
    }
    cout<<x;  
    return 0;
}