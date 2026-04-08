#include <iostream>
#include<vector>
using namespace std;
int searchElemet(vector<vector<int>> & mat,int tar){
    int n=mat.size(),m=mat[0].size();
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==tar){
                return 1;
            }
        }
    }
    return 0;
}

int main() {
    int n,m;
    cin>>n>>m;
    
    vector<vector<int>> mat(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>mat[i][j];
        }
    }

    int tar;
    cin>>tar;

    cout<<searchElemet(mat,tar);
    
    return 0;
}