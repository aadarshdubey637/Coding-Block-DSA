#include <iostream>
using namespace std;

int main() {
    int minF,maxF,step;
    cin>>minF>>maxF>>step;
    for(int F=minF;F<=maxF;F+=step){
        int C=(5*(F-32))/9;
        cout<<F<<"\t"<<C<<endl;
    }
    return 0;
} 