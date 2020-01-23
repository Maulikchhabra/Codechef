#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  int price[] ={1,2,4,8,16,32,64,128,256,512,1024,2048};
  while(t--){
    int n,count=0;
    cin>>n;
    while(n!=0){
      int i =0;
      while(i<12){
        if(price[i]<=n){
          i++;
        }
        else{break;}
      }
      n =n-price[i-1];
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
