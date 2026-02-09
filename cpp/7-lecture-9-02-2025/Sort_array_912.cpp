#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<int> sortArray(vector<int> & nums){
    sort(nums.begin(),nums.end());
    return nums;
}

int main() {
    vector<int> nums={5,4,3,2,1};
    vector<int> result=sortArray(nums);
    for(auto x:result){
        cout<<x<<" ";
    }
    cout<<endl;
    
    return 0;
}