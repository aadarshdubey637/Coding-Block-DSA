// #include <iostream>
// using namespace std;


// int main() {
//     int x;
//     cin>>x;

//     int ans=0;
//     for(int i=1;i*i<=x;i++){
//         ans=i;
//     }
//     cout<<ans;
    
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int squareRoot(int A) {
    int low=0,high=A;
    int ans=0;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(mid<=A/mid){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}
int main () {
        int A;
        cin >> A; 
        cout << squareRoot(A);
	return 0;
}