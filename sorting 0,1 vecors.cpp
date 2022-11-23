#include<iostream>

#include<vector>
using namespace std;
void sortZeroesAndOnes( vector<int> &v){
  int zero=0;
  for(int ele:v){
    if(ele==0){
      zero++;
    }
  }
  for(int i=0;i<v.size();i++){
    if(i<zero){
      v[i]=0;
    }
    else{
      v[i]=1;
    }
  }



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
