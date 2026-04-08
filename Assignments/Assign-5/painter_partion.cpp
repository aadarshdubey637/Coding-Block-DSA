#include <iostream>
#include<vector>
using namespace std;
bool isValid(vector<int> &arr,int n,int m,int maxAllowed){
    int painter=1,borad=0;
    for(int i=0;i<n;i++){
        if(arr[i]>maxAllowed){
            return false;
        }
        if(borad+arr[i]<=maxAllowed){
            borad+=arr[i];
        }else{
            painter++;
            borad=arr[i];
        }
    }
    return painter<=m?false:true;
}
int painterPartion(vector<int> & arr,int n,int m){

    if(m>n){
        return -1;
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int st=0,end=sum;
    int ans=0;
    while(st<=end){
        int mid=st+(end-st)/2;
        if(isValid(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    }
    return ans;
}

int main() {
    int n;
    cin>>n;
    int m;
    cin>>m;


    vector<int> arr(n);

    cout << "Enter board lengths: ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout<<painterPartion(arr,n,m);


}