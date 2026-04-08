#include <iostream>
#include<vector>
using namespace std;
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        for(int j=0;j<matrix[0].size();j++){
            vector<int> temp;
            for(int i=0;i<matrix.size();i++){
                temp.push_back(matrix[i][j]);
            }
            ans.push_back(temp);
        }
        return ans;
    }

int main() {
    vector<vector<int>> nums={
    {1,2,3},
    {4,5,6},
    {7,8,9}
    };
    vector<vector<int>> result=transpose(nums);

    for(int i=0;i<result.size();i++){
        for(int j=0;j<result[0].size();j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
