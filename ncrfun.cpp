#include <iostream>
using namespace std;
int fact(int n){
  int factoria1;
  for (int i=2;i<=n;i++){
    factoria1*=i;
  }
return factoria1;


}
int main(){

int n,r;
cin>>n>>r;

int ans=fact(n)/(fact(r)*fact(n-r));
cout<<ans<<endl;



  return 0;
}
