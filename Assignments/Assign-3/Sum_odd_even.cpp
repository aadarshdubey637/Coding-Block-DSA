// #include <iostream>
// using namespace std;

// int main() {
//     int n=2635;
//     int temp=n; 
//     int reverse=0,even=0,odd=0;
//     while(temp>0){
//         int digit=temp%10;
//         reverse=reverse*10+digit;
//         temp=temp/10;
//     }
//     for(int i=1;i<=4;i++){
//     int digit=reverse%10;
//     if(i%2==0){
//         even+=digit;
//     }else{
//         odd+=digit;
//     }
//     reverse/=10;
// }
//     cout<<even<<endl;
//     cout<<odd;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;

	int evenSum=0;
	int oddSum=0;
	int position=1;
	while(n>0){
		int digit=n%10;

		if(position % 2!=0){
			oddSum+=digit;
		}else{
			evenSum+=digit;
		}
		position++;
		n=n/10;
	}
	cout<<oddSum<<endl;
	cout<<evenSum;
    return 0;
}