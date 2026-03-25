#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int runningSum=0;
    for(int i=0;i<n;i++){
        runningSum*=arr[i];
        cout<<runningSum<<" ";
    } 

    return 0;
}