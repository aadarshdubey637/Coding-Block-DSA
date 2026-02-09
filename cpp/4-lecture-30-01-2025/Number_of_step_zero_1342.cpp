#include <iostream>
using namespace std;
  int numberOfSteps(int n) {
    int  count=0;
        while(n>0){
            if(n%2==0){
                n=n/2;
                count++;
            }else{
                n-=1;
                count++;
            }
        }
        return count++;
    }

int main() {
    int n=14;
    cout<<numberOfSteps(n);
    return 0;
}