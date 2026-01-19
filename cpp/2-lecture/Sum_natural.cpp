#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter value:";
    cin>>n;
    int sum=0;
    for(int i=1;i<n+1;i++){
        sum+=i;
    }
    cout<<"Sum is:"<<sum;
    return 0;
}