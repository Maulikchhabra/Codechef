#include <iostream>
//#include<string.h>
#include<bits/stdc++.h>
using namespace std;

int subseq(string a ,string b){
    int m=a.length();
    int n=b.length();
    int i=0;
    for(int j=0 ;i<m && j<n; j++){
        if(a[i]==b[j]){
            i++;
        }
    }
    return i==m;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    char s1[20],s2[20];
	    cin>>s1>>s2;
	    if(s1==s2){
	        cout<<"YES"<<endl;

	    }
	    if(subseq(s1,s2)||subseq(s2,s1)){
	        cout<<"YES"<<endl;
	    }
	    else {cout<<"NO"<<endl;}
	}

	return 0;
}
