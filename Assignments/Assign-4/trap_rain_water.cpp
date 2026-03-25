#include <iostream>
#include <bits/stdc++.h>


using namespace std;
int trapWater(int arr[],int n){
    int l=0,r=n-1;
    int lmax=0,rmax=0;
    int ans=0;
    while(l<r){
        lmax=max(lmax,arr[l]);
        rmax=max(rmax,arr[r]);

        if(lmax<rmax){
            ans+=lmax-arr[l];
            l++;
        }else{
            ans+=rmax-arr[r];
            r--;
        }
    }
    return ans;
}
int main() {

	int x;
	cin>>x;

	while(x--){
    int n;
	cin>>n;

	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

    cout<<trapWater(arr,n)<<endl;
	}
    return 0;
}