// // without sliding window;
// #include <iostream>
// using namespace std;
// double subArray(double arr[],int n,int k){
//     double maxSum=0;
//     for(int i=0;i<=n-k;i++){
//         double sum=0;
//         for(int j=i;j<i+k;j++){
//             sum+=arr[j];
//         }
//         maxSum=max(sum,maxSum);
//     }
//     return maxSum/k; 
// }

// int main() {
//     int n=6;
//     double arr[n]={1,12,-5,-6,50,3};
//     int k=4;
//     cout<<subArray(arr,n,k);
   
//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
    double findMaxAverage(vector<int>& nums, int k) {
        int n=nums.size();
        double current=0;
        for(int i=0;i<k;i++){
            current+=nums[i];
        }
        int maxx=current;
        for(int i=1;i<=n-k;i++){
            current=current-nums[i-1]+nums[i+k-1];
            if(current>maxx){
                maxx=current;
            }
        }
        return maxx;
    }
int main() {
    vector<int> nums={3,8,2,5,7,6,12};
    int k=4;
    cout<<findMaxAverage(nums,k);
    
    return 0;
}