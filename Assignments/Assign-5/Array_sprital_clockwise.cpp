// #include <iostream>
// #include<vector>
// using namespace std;
// vector<int> sprialOrder(vector<vector<int>>&mat){
//     int top=0,left=0;
//     int right=mat[0].size()-1;
//     int bottom=mat.size()-1;
//     vector<int>ans;

//     while(top<=bottom && left<=right){

//         for(int i=left;i<=right;i++){
//             ans.push_back(mat[top][i]);
//         }
//         top++;
//         for(int i=top;i<=bottom;i++){
//             ans.push_back(mat[i][right]);
//         }
//         right--;
//         if(top<=bottom){
//             for(int i=right;i>=left;i--){
//                 ans.push_back(mat[bottom][i]);
//             }
//             bottom--;
//         }
//         if(left<=right){
//             for(int i=bottom;i>=top;i--){
//                 ans.push_back(mat[i][left]);
//             }
//             left++;
//         }
//     }
//     return ans;
// }

// int main() {
//     int n,m;
//     cin>>n>>m;
//     vector<vector<int>> mat(m,vector<int>(n));

    
//     for(int i=0;i<m;i++){
//         for(int j=0;j<n;j++){
//             cin>>mat[i][j];
//         }
//     }

//     vector<int> result = sprialOrder(mat);

//     // print result
//     for(int x : result){
//         cout << x << ", ";
//     }
//     cout<<"END";


//     return 0;
// }

#include <iostream>
#include<vector>
using namespace std;
vector<int> clockWise(vector<vector<int>> & mat){
    int top=0,left=0;
    int right=mat[0].size()-1,bottom=mat.size()-1;
    vector<int> ans;
    while(left<=right && top <=bottom){
        for(int i=left;i<=right;i++){
            ans.push_back(mat[top][i]);
        }
        top++;
        for(int i=top;i<=bottom;i++){
            ans.push_back(mat[i][right]);
        }
        right--;
        if(top<=bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }
    return ans;
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

    vector<int> result = clockWise(mat);

    // print result
    for(int x : result){
        cout << x << ", ";
    }
    cout<<"END";



    
    return 0;
}