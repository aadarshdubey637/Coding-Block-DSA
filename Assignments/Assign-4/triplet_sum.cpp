// #include <iostream>
// using namespace std;
// void  tripetSum(int arr[],int n,int tar){
//     for(int i=0;i<n;i++){
//         for(int j=i+1;i<n;j++){
//             for(int k=j+1;j<n;k++){
//                 if(arr[i]+arr[j]+arr[k]==tar){
//                     cout<<arr[i]<<", "<<arr[j] <<" and "<<arr[k]<<endl;
//                 }
//             }
//         }
//     }
// }
// int main() {
//     int n;
//     cin>>n;

//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     int tar;
//     cin>>tar;

//     tripetSum(arr,n,tar);

//     return 0;
// }

#include <iostream>
#include<algorithm>
using namespace std;
void  trpiletSum(int arr[],int n,int tar){
    sort(arr,arr+n);
    for(int i=0;i<n-2;i++){
        int left=i+1,right=n-1;
        while(left<right){
            int sum=arr[i]+arr[left]+arr[right];
            if(sum<tar){
                left++;
            }else if(sum > tar){
                right--;
            }else{
                cout<<arr[i]<<", "<<arr[left]<<" and "<<arr[right]<<endl;
                left++;
                right--;
            }
        }
    }
}
int main() {
    int  n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int tar;
    cin>>tar;

    trpiletSum(arr,n,tar);
    
    return 0;
}