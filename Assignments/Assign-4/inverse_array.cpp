// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }

//     cout<<arr[0]<<" ";

//     for(int i=n-1;i>=1;i--){
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
//     return 0;

// }

#include <iostream>
#include<vector>
using namespace std;
void inverse(int arr[],int inv[],int i,int n){
    if(i==n){
        return;
    }
    int val=arr[i];
    inverse(arr,inv,i+1,n);
    inv[val]=i;
    
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    int inv[n];
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    inverse(arr,inv,0,n);

    for(int i=0;i<n;i++){
        cout<<inv[i]<<" ";
    }
    cout<<endl; 
    return 0;
}