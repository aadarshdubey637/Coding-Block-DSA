#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
   
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    for(int i=0;i<mat.size();i++){
        sort(mat[i].begin(),mat[i].end());
    }

    for(auto row:mat){
        for(auto val:row){
            cout<<val<<" ";
        }
        cout<<endl;
    } 
    
    return 0;
}   