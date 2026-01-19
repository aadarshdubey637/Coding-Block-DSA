#include <iostream>
using namespace std;

int main() {
    int rate;
    cout<<"Enter rate";
    cin>>rate;

    int principle;
    cout<<"Enter principle";
    cin>>principle;

    int time;
    cout<<"Enter time";
    cin>>time;
    cout<<"simple interset is:"<<rate*principle*time/100;


    return 0;
}