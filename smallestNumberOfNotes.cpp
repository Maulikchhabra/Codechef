#include<iostream>
using namespace std;
int main(){
  int t;
  cin>>t;
  int notes[] ={1,2,5,10,50,100};
  while(t--){
    int n,count=0;
    cin>>n;
    while(n!=0){
      int i =0;
      while(i<6){
        if(notes[i]<=n){
          i++;
        }
        else{break;}
      }
      n =n-notes[i-1];
      count++;
    }
    cout<<count<<endl;
  }
  return 0;
}
