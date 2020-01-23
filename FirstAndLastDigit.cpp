#include<iostream>
using namespace std;
int main(){
  int t,n,first,last;
  cin>>t;
  while(t--){
    cin>>n;
    last =n%10;
    while(n>=10){
      n =n/10;
    }
    first =n;
    cout<<first+last<<endl;
  }

}
