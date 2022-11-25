#include<iostream>
#include <vector>
using namespace std;
bool checkprefixsuffic(vector<int> &v) {
  int sum=0;
  for(int i=0;i<v.size();i++){
    sum+=v[i];

  }
  int prefixsum=0;
  for(int i=0;i<v.size();i++){
    prefixsum+=v[i];
    int suffixsum=sum-prefixsum;

    if(suffixsum==prefixsum){
      return true;
    }
  }


  return false;
  /* code */
}
int main(){
  int n;
  cin>>n;

  vector<int> v;
  for(int i=0;i<n;i++){
    int ele;
    cin>>ele;
    v.push_back(ele);
  }
    cout<<checkprefixsuffic(v)<<endl;

  return 0;
}
