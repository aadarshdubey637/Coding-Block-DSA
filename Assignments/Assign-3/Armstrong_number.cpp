#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int N1,N2;
    cin>>N1>>N2;

    for(int i=N1;i<=N2;i++){
        int temp=i;
        int count=0;
        
        // count the digit
        while(temp>0){
            count++;
            temp/=10;
        }

        // power of digit which is counted
        temp=i;
        int sum=0;
        while(temp>0){
            int power=1;
            int digit=temp%10;
            for(int i=0;i<count;i++){
                int digit=temp%10;
                power*=digit;
            }
            sum+=power;
            temp/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}