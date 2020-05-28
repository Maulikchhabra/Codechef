#include<iostream>
using namespace std;
int main()
{
  int sum=0,r,q,num,t;
  cin>>t;
  while(t--)
  {
     sum=0;
    cin>>num;
    while(num!=0)
    {
      r =num%10;
      q=num/10;
      num=q;
      sum=sum+r;
    }

    cout<<sum<<endl;
  }
  return 0;
}
