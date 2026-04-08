#include <iostream>
#include<vector>

using namespace std;
bool isTriangle(vector<vector<int>> &mat){
    int n=mat.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i < j && mat[i][j]!=0){
                return false;
            }  
        }
    }
     return true;
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
    cout<<isTriangle(mat);
    return 0;
}