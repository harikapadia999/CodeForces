#include <iostream>
using namespace std;
int main ()
{
  int n,p,v,t,sum{0};
  cin>>n;
  while(n--){
      cin>>p>>v>>t;
      if(p+v+t >=2)
      sum+=1;
  }
  cout<<sum<<endl;
  return 0;
}
