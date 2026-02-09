#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=0;
    while(cin>>n){
        if(sum+n<0){
            break;
        }
        sum+=n;
        cout<<n<<endl;
    }

    return 0;
}