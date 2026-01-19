#include <iostream>
using namespace std;

void max_three(int a,int b,int c){
    if(a>b && a>c){
        cout<<"A is greater:";
    }else if(b>a && b>c){
        cout<<"B i greater:";
    }else{
        cout<<"C is greater:";
    }
}
int main() {
    int a,b,c;
    cout<<"Enter a:";
    cin>>a;

    cout<<"Enter b:";
    cin>>b;

    cout<<"Enter c:";
    cin>>b;
    
    max_three(a,b,c);
    return 0;
}