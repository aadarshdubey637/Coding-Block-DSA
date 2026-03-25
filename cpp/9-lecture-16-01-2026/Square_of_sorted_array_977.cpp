#include <iostream>
#include<vector>
using namespace std;
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> res(nums.size());

        int l=0,r=nums.size()-1;

        for(int i=nums.size()-1;i>=0;i--){

            if(abs(nums[r])> abs(nums[l])) res[i]=nums[r]*nums[r--];

            else res[i]=nums[l]*nums[l++];
        }
        
        return res;
    }
int main() {
    vector<int> nums= {-4,-1,0,3,10};
    vector<int> result=sortedSquares(nums);
    for(auto x: result){
        cout<< x<<" ";
    }
    return 0;
}