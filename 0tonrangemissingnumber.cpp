#include<iostream>
using namespace std;
int main(){

int a[]={1,2,3,4,6,0};
  int sum=0;
  int sum2=0;
  for(int i=0;i<=6;i++){
    sum+=i;
  }
  for(int j=0;j<5;j++){
    sum2+=a[j];

  }

int missing=sum-sum2;
cout<<missing<<endl;




  return 0;
}
