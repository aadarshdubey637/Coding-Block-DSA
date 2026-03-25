#include <iostream>
#include<vector>
using namespace std;
    int maxSubArray(vector<int>& nums) {
        int currSum=0;
        int maxSum=nums[0];
        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            
            maxSum=max(maxSum,currSum);
            if(currSum<0){
                currSum=0;
            }
        }
        return maxSum;
    }

int main() {
    vector<int> nums={5,4,-1,7,8};
    cout<<maxSubArray(nums);    
    return 0;
}