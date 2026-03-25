#include <iostream>
using namespace std;
int linearSearch(int arr[],int n ,int tar){
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            return i;
        }
    }
    return -1;
}
int main() {
    int n;
    cin>>n;

    int tar;
    cin>>tar;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    cout<<linearSearch(arr,n,tar);

    return 0;
}