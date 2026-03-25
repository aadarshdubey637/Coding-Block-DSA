#include <iostream>
#include<algorithm>
using namespace std;
int main() {
    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int m;
        cin>>m;

        sort(arr,arr+n);

        int left=0,right=n-1;
        int a=0,b=0;
        while(left<right){
            int sum=arr[left]+arr[right];
            if(sum==m){
                a=arr[left];
                b=arr[right];
                left++;
                right--;
            }else if(sum<m){
                left++;
            }else{
                right--;
            }
        }
        cout<<"Deepak should buy roses whose prices are "<<a<<" and "<<b<<"."<<endl;
        cout<<endl;
    }
    return 0;
}