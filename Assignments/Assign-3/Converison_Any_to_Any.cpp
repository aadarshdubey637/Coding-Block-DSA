#include <iostream>
using namespace std;

int main() {
    int sb,db,sn;
    cin>>sb>>db>>sn;
    int decimal=0;
    int power=1;

    while(sn>0){
        int digit=sn%10;
        decimal=decimal+digit*power;
        power=power*sb;
        sn=sn/10;
    }

    int answer=0;
    int place=1;
    while(decimal>0){
        int rem=decimal%db;
        answer=answer+rem*place;
        place=place*10;
        decimal/=db;
    }
    cout<<answer;

    return 0;
}