#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	  int n;
    cin>>n;
    if(1<=n<=10000){
      int rev =0,rem;
      while(n>0){
        rem =n%10;
        rev =rev*10+rem;
        n =n/10;
      }
      cout<<rev<<endl;
    }
	}
	return 0;
}