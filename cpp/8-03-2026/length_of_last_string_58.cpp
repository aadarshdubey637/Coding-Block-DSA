#include <iostream>
using namespace std;
int lengthOfstring(string s){
    int count=0;
    bool counting = false;

    for(int i=s.size()-1;i>=0;i--){
        if(s[i]==' ' && counting)break;
        if(s[i]!=' '){
            count++;
            counting=true;
        }
    }
    return count;
}

int main() {
    string s="Hello world";
    cout<<lengthOfstring(s);
    return 0;
}