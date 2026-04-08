#include <iostream>
using namespace std;

int main() {
    string s="ABC";
    int n=s.size();
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<s.substr(i,j)<<endl;
        }
    }  
   return 0;
}