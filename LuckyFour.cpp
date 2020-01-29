#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,rem,count =0;
    cin>>n;
    while(n>0){
      rem =n%10;
      count =(rem ==4) ? count+1 :count; //ternary operator
      n =n/10;
    }
    cout<<count<<endl;
  }
  return 0;
}
