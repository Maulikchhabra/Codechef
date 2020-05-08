#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,fact=1;
    cin>>n;
    for(int i =1;i<=n;i++){
       fact = i*fact;}
    cout<<fact<<endl;
  }
}
