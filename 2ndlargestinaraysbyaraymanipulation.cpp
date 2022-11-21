#include<iostream>
#include<climits>

using namespace std;
int largeindex(int array[],int size){
  int max=INT_MIN;
  int index=-1;
  for(int i=0;i<size;i++){
    if(array[i]>max){
      max=array[i];
      index=i;
    }
  }
  return index;

}

int main(){
  int array[]={2,3,5,7,6,1};
  int largestnumindex=largeindex(array,6);

  array[largestnumindex]=-1;
  int slargestnumindex=largeindex(array,6);
  cout<<array[slargestnumindex]<<endl;
  return 0;
}
