#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={-2,-3,4,-1,-2,1,5,-3};
int max_sofar=INT_MIN;
int max_ending=0;
for(int i=0;i<8;i++){
  max_ending=max_ending+arr[i];
  if(max_sofar<max_ending){
    max_sofar=max_ending;
  }
  if(max_ending<0){
    max_ending=0;
  }
}
cout<<max_sofar<<" "<<endl;

return 0;
}
