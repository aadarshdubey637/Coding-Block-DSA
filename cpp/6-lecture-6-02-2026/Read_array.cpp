#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value of element:"<<i+1;
        cin>>arr[i];
    }
    // for(int i=1;i<=n;i++){
    //     cout<<arr[i]<<" ";
    // }
    int temp=arr[0];
    arr[0]=arr[2];
    arr[2]=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


