#include <iostream>
#include<vector>
using namespace std;
    int thirdMax(vector<int>& nums) {
        int  first=INT16_MIN;
        int second=INT16_MIN;
        int third=INT16_MIN;
    
        for(int x:nums){
            
            if(x==first|| x==second|| x==third){
                continue;
            }else if(x>first){
                third=second;
                second=first;
                first=x;
            }else if(x>second){
                third=second;;
                second=x;
            }else if(x>third){
                third=x;
            }
        }
        if(third==INT16_MIN){
            return first;
        }else{
            return third;
        }

    }

int main() {
    vector<int> nums={3,2,1};
    cout<<thirdMax(nums);
    
    return 0;
}