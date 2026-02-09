#include <iostream>
using namespace std;

int main() {
    int T;
    cin>>T;


    while(T--){
        int M,N;
        cin>>M>>N;

        int ayush=0,harshit=0;
        int turn =1;
        while(turn){
            if(turn % 2 == 1){
                ayush+=turn;
                if(ayush>M){
                    cout<<"Harshit"<<endl;
                    break;
                }
            }else{
                harshit+=turn;
                if(harshit>N){
                    cout<<"Aayush"<<endl;
                    break;
                }
            }
            turn++;  
        }
    }
    return 0;
}