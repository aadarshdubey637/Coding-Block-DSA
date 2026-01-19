#include <iostream>
using namespace std;
string grade(int a){
    if(a>=90 && a<=100){
        return "A+";
    }else if(a>=80 && a<=89){
        return "A";
    }else if(a>=70 && a<=79){
        return "B";
    }else if(a>=80 && a<=69){
        return "C";

    }else {
        return "fail";
    }
}

int main() {
    int marks;
    cout<<"Enter marks";
    cin>>marks;

    cout<<grade(marks);
    return 0;
}