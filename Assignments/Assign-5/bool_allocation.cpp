// #include <iostream>
// #include<vector>
// using namespace std;

// bool isvalid(vector<int>& arr,int n,int m,int maxAllowedPage){
//     int student=1,pages=0;
//     for(int i=0;i<n;i++){
//         if(arr[i]>maxAllowedPage){
//             return false;
//         }
//         if(pages+arr[i]<=maxAllowedPage){
//             pages+=arr[i];
//         }else{
//             student++;
//             pages=arr[i];
//         }
//     }
//     return student>m? false:true;
// }

// int allocatedBooks(vector<int>&arr,int n,int m){
//     if(m>n){
//         return -1;
//     }
//     int sum=0;
//     for(int i=0;i<n;i++){
//         sum+=arr[i];
//     }

//     int st=0,end=sum;
//     int ans=-1;
//     while(st<=end){
//         int mid=st+(end-st)/2;

//         if(isvalid(arr,n,m,mid)){
//             ans=mid;
//             end=mid-1;
//         }else{
//             st=mid+1;
//         }
//     }
//     return ans;
// }

// int main() {
//     vector<int> arr={12,34,67,90};
//     int n=4,m=2;
//     cout<<allocatedBooks(arr,n,m)<<endl;


//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &arr,int n,int m,int maxAllowed){
    int student=1,pages=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowed){
            return false;
        }if(pages+arr[i]<=maxAllowed){
            pages+=arr[i];
        }else{
            student++;
            pages=arr[i];
        }
    }
    return student<m? false:true;
}
int allocateBook(vector<int> &arr,int n,int m){
    if(m>n){
        return  -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }

    int st=0,end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;

}

int main() {
    
    vector<int> arr={12,34,67,90};
    int n=4,   m=2;
    cout<<allocateBook(arr,n,m)<<endl;

    return 0;
}