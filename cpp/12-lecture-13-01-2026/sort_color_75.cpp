// #include <iostream>
// #include<vector> 
// using namespace std;
//     void sortColors(vector<int>& nums) {
//         int low=0,mid=0,high=nums.size()-1;
//         while(mid<=high){
//             if(nums[mid]==0){
//                 swap(nums[low],nums[mid]);
//                 low++;
//                 mid++;
//             }else if(nums[mid]==1){
//                 mid++;
//             }else{
//                 swap(nums[high],nums[mid]);
//                 high--;
//             }
//         }
//     }

// int main() {
//     vector<int> nums={2,0,2,1,1,0};
//     sortColors(nums);
//     for(int i=0;i<nums.size();i++){
//         cout<<nums[i]<<" ";
//     }
//     return 0;
// }


#include <iostream>
#include<vector>
using namespace std;
    void sortColors(vector<int>& nums) {
        int cout0=0,cout1=0,cout2=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==0)cout0++;
            else if(nums[i]==1)cout1++;
            else cout2++;
        }
        int idx=0;
        for(int i=0;i<cout0;i++){
            nums[idx++]=0;
        }
        for(int i=0;i<cout1;i++){
            nums[idx++]=1;
        }
        for(int i=0;i<cout2;i++){
            nums[idx++]=2;
        }
    }

int main() {
     vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    
    return 0;
}