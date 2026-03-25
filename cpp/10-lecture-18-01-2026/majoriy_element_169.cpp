#include <iostream>
#include<vector>
using namespace std;
    int majorityElement(vector<int>& nums) {
        int count=0,candidate=0;
        for(int num :nums){
            if(count==0){
                candidate=num;
            }
            if(num==candidate){
                count++;
            }else{
                count--;
            } 
        }
        return candidate;
    }

int main() {
    vector<int> nums={3,2,3};
    cout<<majorityElement(nums);
    return 0;
}