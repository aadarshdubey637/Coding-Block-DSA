#include <iostream>
using namespace std;

int main() {
    int N1=10;
    int N2=4;
    int i=1;
    while(N1>0){
        int term =3*i+2;

        if(term%N2 !=0){
            cout<<term<<endl;
            N1--;
        }
        i++;
    }
    return 0;
}