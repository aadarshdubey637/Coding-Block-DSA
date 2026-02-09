#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of array :";
    cin>>n;
    
    if(n<2){
        cout<<"Second largest does not exit:";
        return 0;
    }

    int largest=INT16_MIN;
    int secondLargest=INT16_MIN;

    
    for(int i=0;i<n;i++){
        int x;
        cout<<"Enter the value of array "<<i+1<<":";
        cin>>x;

        if(x>largest){
            secondLargest=largest;
            largest=x;
        }
        else if(x < largest && x > secondLargest){
            secondLargest=x;
        }
    }
    if(secondLargest==INT16_MIN){
        cout<<"Second largest are not exit:";
    }else{
        cout<<secondLargest;
    }

    
    return 0;
}