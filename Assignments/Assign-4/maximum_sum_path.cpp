#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;

    while(t--){
        int n,m;
        cin>>n>>m;
        int arr1[n];
        for(int i=0;i<n;i++){
            cin>>arr1[i];
        }
        int arr2[m];
        for(int i=0;i<m;i++){
            cin>>arr2[i];
        }
    
        int i=0,j=0;
        int sum1=0,sum2=0;
        int result=0;
        while(i<n && j<m){
            if(arr1[i]<arr2[j]){
                sum1+=arr1[i];
                i++;
            }else if(arr1[i]>arr2[j]){
                sum2+=arr2[j];
                j++;
            }else{
                result+=max(sum1,sum2)+arr1[i];
                sum1=0;
                sum2=0;
                i++;
                j++;
            }
        }
        while(i<n){
            sum1+=arr1[i];
            i++;
        }
        while(j<m){
            sum2+=arr2[j];
            j++;
        }
        result+=max(sum1,sum2);

        cout<<result<<endl;
    }
    return 0;
}