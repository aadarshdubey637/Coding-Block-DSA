#include <iostream>
using namespace std;

int main() {
    int n=3;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        int num=i;
        for(int j=1;j<=i;j++){
            cout<<" "<<num<<" ";
            num++;
        }
        int temp=num;
        for(int j=2;j<=i;j++){
            temp--;
            cout<<" "<<temp-1<<" ";
        }
        cout<<endl;
    }
    for(int i=n-1;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<"   ";
        }
        int idx=i;
        for(int j=1;j<=i;j++){
            cout<<" "<<idx<<" ";
            idx++;
        }
        int temp=idx;
        for(int j=2;j<=i;j++){
            temp--;
            cout<<" "<<temp-1<<" ";
        }
        cout<<endl;
    }

    return 0;
}