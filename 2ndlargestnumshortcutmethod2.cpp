#include<iostream>
#include<climits>

using namespace std;
int secondlargestnumber(int array[],int size){
  int max=INT_MIN;
  int secondmax=INT_MIN;
  for(int i=0;i<size;i++){
    if(array[i]>max){
      max=array[i];
    }
  }
  for(int i=0;i<size;i++){
    if(array[i]>secondmax && array[i]!=max){
      secondmax=array[i];
    }
  }
  return secondmax;
}
int main(){
  int array[]={2,3,5,7,6,1,7};
  int n=7;
  cout<<secondlargestnumber(array,n)<<endl;
  return 0;
}
