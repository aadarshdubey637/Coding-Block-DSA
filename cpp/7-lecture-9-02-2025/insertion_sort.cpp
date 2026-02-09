#include <iostream>
using namespace std;
int insertion(int arr[],int n){
    for(int i=0;i<n;i++){
        int curr=arr[i];
        int prev=i-1;

        while(prev>=0 && arr[prev]>curr){
            arr[prev+1]=arr[prev];
            prev--;
        }
        arr[prev+1]=curr;
    }
}
int main() {
    int nums[]={5,4,3,2,1};
    int n=5;
    insertion(nums,n);

     for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
    return 0;
}