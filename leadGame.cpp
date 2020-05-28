#include <iostream>
using namespace std;

int main(){
  int si,ti,n,k=0;
  cin>>n;
  int lead[n];
  int num[n];
  int final[n];

  for(int i=0;i<n;i++){
    cin>>si;
    cin>>ti;
    lead[i]=si-ti;}

  for(int i=0;i<n;i++){
    k=k+lead[i];
    final[i]=k;}
  int max=0;

  for(int i=0;i<n;i++){
    if(final[i]>=0){
      num[i]=1;
    }else{
      num[i]=2;
    }
  }
  int t=0;
  for(int i=0;i<n;i++){
    if(abs(final[i])>max){
      max=abs(final[i]);
      t=i;
    }
  }
  cout<<num[t]<<" "<<max;
}
