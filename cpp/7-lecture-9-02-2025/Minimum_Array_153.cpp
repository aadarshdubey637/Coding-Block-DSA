// #include <iostream>
// using namespace std;

// int main() {
//    int n;
//    cout<<"Enter the size of array";
//    cin>>n;
   
//    int arr[n];
//        int min=arr[0];

//    for(int i=0;i<n;i++){
//     cout<<"Enter the value of array "<<i+1<<":";
//     cin>>arr[i];

//     if(arr[i]<min){
//         min=arr[i];
//     }
//    }
//    cout<<min;
//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
int findMin(vector<int>& nums) {
    int n=nums.size();
    int min=nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]<min){
            min=nums[i];
        }
    }
    return min;
    }

int main() {
    vector<int> nums={3,2,1};
    cout<<findMin(nums);
    return 0;
}
