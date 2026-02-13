// // brute force approch 
// #include <iostream>
// #include<vector>
// using namespace std;
//  int missingNumber(vector<int>& nums) {
//     int n=nums.size();
//     for(int i=0;i<=n;i++){
//         bool found=false;
//         for(int j=0;j<nums.size();j++){
//             if(nums[j]==i){
//                 found=true;
//                 break;
//             }
//         }
//         if(!found){
//             return i;
//         }
//         return -1;
//     } 

// }

// int main() {
//     vector<int> nums={3,0,1};
//     cout<<missingNumber(nums);
    
//     return 0;
// }

// using unordered_Set
// #include <iostream>
// #include<vector>
// #include<unordered_set>

// using namespace std;
//     int missingNumber(vector<int>& arr) {
//         unordered_set<int> s(arr.begin(), arr.end());
//         vector<int> ans;
//         for(int i = 0; i <= arr.size(); i++) {
//             if(s.find(i) == s.end()) {
//                 return i;
//             }
//         }
//         return  -1;
//     }
// int main() {
//     vector<int> nums={3,0,1};
//     cout<<missingNumber(nums);
    
//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
 int missingNumber(vector<int>& arr) {
            int n=arr.size();
            int expected=n*(n+1)/2;


            int actual=0;
            for(int num :arr){
                actual+=num;
            } 
            return expected-actual;
        }
    
int main() {
    vector<int> nums={3,0,1};
    cout<<missingNumber(nums);
    
    return 0;

}