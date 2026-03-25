#include <iostream>
#include<vector>
using namespace std;
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        int i=1;
        while(i<n&& nums[i]>nums[i-1]){
            i++;
        }
        if(i==1)return false;
        int peak=1;

        while(i<n && nums[i]<nums[i-1]){
            i++;
        }
        if(i==peak) return false;

        int valley=i;
        while(i<n && nums[i]>nums[i-1]){
            i++;
        }
        if(valley==i)return false;
        return i==n;

    }


int main() {    
    vector<int> nums={1,3,5,4,2,6};
    cout<<isTrionic(nums);
    
    return 0;
}