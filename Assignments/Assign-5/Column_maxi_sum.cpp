#include <iostream>
#include<vector>
#include<utility>
#include<climits>
using namespace std;
pair<int,int> maxSum(vector<vector<int>> & mat){
    int n=mat.size();
    int m=mat[0].size();

    int maxSum=INT_MIN;
    int colIndex=-1;

    for(int j=0;j<m;j++){
        int sum=0;

        for(int i=0;i<n;i++){
            sum+=mat[i][j];
        }
        if(sum > maxSum){
            maxSum=sum;
            colIndex=j;
        }
    }
    return {colIndex,maxSum};
}

int main() {
    int n;
    cin>>n;

    vector<vector<int>> mat(n,vector<int>(n));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    pair<int,int> ans=maxSum(mat);

    cout<<ans.first<<" ";
    cout<<ans.second;


    return 0;
}