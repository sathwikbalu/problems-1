#include<iostream>
using namespace std;
int main(){
  int num[]={3,9,19,11,7};
  int key=3;
  int ans=-1;
  for(int i=0;i<5;i++){
    if(num[i]==key){
      ans=i;
      break;
    }
  }
cout<<ans<<endl;













return 0;
}
