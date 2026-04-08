#include <iostream>
#include<vector>
using namespace std;
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n=arr.size();
        int current=0;
        int count=0;

        for(int i=0;i<k;i++){
            current+=arr[i];
        }
        if(current/k>=threshold){
            count++;
        }
        for(int i=1;i<=n-k;i++){
            current=current-arr[i-1]+arr[i+k-1];
            if(current/k>=threshold){
                count++;
            }
        }
        return count;
    }

int main() {
    vector<int> nums={2,2,2,2,5,5,5,8};
    int k=3;
    int threshold=4;
    cout<<numOfSubarrays(nums,k,threshold);
    return 0;
}