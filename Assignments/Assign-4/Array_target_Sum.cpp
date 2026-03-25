// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// void targetSum(int arr[], int n, int target)
// {
//     sort(arr, arr + n);

//     int left = 0;
//     int right = n - 1;
//     while (left <= right)
//     {
//         int sum = arr[left] + arr[right];
//         if (sum > target)
//         {
//             right--;
//         }
//         else if (sum < target)
//         {
//             left++;
//         }
//         else
//         {
//             cout << arr[left] << " and " << arr[right] << endl;
//             left++;
//             right--;
//         }
//     }
// }
// int main() {
// 	int n;
// 	cin>>n;
// 	int arr[n];
// 	for(int i=0;i<n;i++){
// 		cin>>arr[i];
// 	}
// 	int x;
// 	cin>>x;
// 	targetSum(arr,n,x);
// 	return 0;
// }

#include <iostream>
#include<algorithm>
using namespace std;
void targetSum(int arr[], int n, int tar){
    sort(arr,arr+n);
 
    for(int i=0;i<n-2;i++){
    int left=0;
    int right=n-1;
    while(left<right){
        int sum = arr[i]+arr[left]+arr[right];
        if(sum<tar){
            left++;
        }if(sum>tar){
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

    targetSum(arr,n,tar);
    
    return 0;
}