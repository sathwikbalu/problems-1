#include<iostream>
using namespace std;
int btd(int n){
  int ans=0;
  int mul=1;
  while(n>0){
    int ld=n%10;
    ans+=ld*mul;
    mul*=8;
    n/=10;




  }
  return ans;



}



int main(){
int n;
cin>>n;

cout<<btd(n)<<endl;





  return 0;
}
