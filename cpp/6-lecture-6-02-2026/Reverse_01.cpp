#include <iostream>
using namespace std;
int revese(int arr[],int n){
    for(int i=n-1;i>=0;i--){
        cout<<arr[i]<<endl;
    }

}

int main() {
    int n;
    cout<<"Enter size of array :";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"Enter value of element:"<<i+1<<" ";
        cin>>arr[i];
    }
    revese(arr,n);
    return 0;
}
