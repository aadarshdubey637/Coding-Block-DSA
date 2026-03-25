#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int cout0=0,cout1=0,cout2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0)cout0++;
        else if(arr[i]==1)cout1++;
        else cout2++;
    }
    int idx=0;
    for(int i=0;i<cout0;i++){
        arr[idx++]=0;
    }
     for(int i=0;i<cout1;i++){
        arr[idx++]=1;
    } for(int i=0;i<cout2;i++){
        arr[idx++]=2;
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}