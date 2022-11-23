#include<iostream>

#include <vector>


using namespace std;
void sortZeroesAndOnes( vector<int> &v){
  int leftptr=0;
  int rightptr=v.size()-1;

  while(leftptr<rightptr){
    if(v[leftptr]==1 && v[rightptr]==0){
      v[leftptr++]=0;
      v[rightptr--]=1;
    }
    if(v[leftptr]==0){
      leftptr++;
    }
    if(v[rightptr]==0){
      rightptr--;
    }





  }
  return;
}


int main(){
  int n;
  cin>>n;
  vector<int> v;

  for(int j=0;j<n;j++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
sortZeroesAndOnes(v);
for(int i=0;i<n;i++){
  cout<<v[i]<<" ";
}cout<<endl;

return 0;
}
