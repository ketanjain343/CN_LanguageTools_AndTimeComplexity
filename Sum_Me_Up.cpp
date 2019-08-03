#include<bits/stdc++.h>
using namespace std;
int main() {

	// Write your code here
  int t;
  cin>>t;
  while(t>0)
  {
    long long int n;
    cin>>n;
    int result=0;
    while(n>=1)
    {
      result=result+n%10;
      n=n/10;
    }
    cout<<result<<endl;
    t--;
  }
  return 0;
}