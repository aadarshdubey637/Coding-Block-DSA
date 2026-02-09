#include <iostream>
using namespace std;
int linear_search(int arr[],int search,int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            return i;
        }
    }
    return -1; 
}
int main() {
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value of element:"<<i+1;
        cin>>arr[i];
    }
    int search;
    cout<<"Enter searching element:";
    cin>>search;

    cout<<linear_search(arr,search,n);

    return 0;
}
