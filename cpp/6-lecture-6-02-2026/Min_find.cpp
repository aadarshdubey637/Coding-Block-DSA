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
    int  min=arr[0];
    for(int i=0;i<n;i++){
    if(arr[i]<min){
        min=arr[i];
        }
    }
    cout<<min;
    return 0;
}
