#include<iostream>
using namespace std;
int main()
{
  int n,k,count=0;
  long long int no;
  cin>>n>>k;
  while(n--)
  {
    cin>>no;
    if(no%k==0)
    {
      count++;
    }
  }
  cout<<count;
  return 0;
}
