#include<iostream>
#include <vector>
using namespace std;
void sortbyparity(vector<int> &v){
  int left_ptr=0;
  int right_ptr=v.size()-1;
  while(left_ptr<right_ptr){
    if (v[left_ptr]%2==1 && v[right_ptr]%2==0){
      swap(v[left_ptr],v[right_ptr]);
      left_ptr++;right_ptr--;
    }
    if(v[left_ptr]%2==0){
      left_ptr++;
    }
    if(v[right_ptr]%2==1){
      right_ptr++;
    }  }

return;
}
int main(){
  int n;
  cin>>n;
  vector<int> v;
for(int i=0;v.size();i++){
  int ele;
  cin>>ele;
  v.push_back(ele);
}


sortbyparity(v);
for(int i=0;i<v.size();i++){
  cout<<v[i]<<endl;
}
cout<<endl;







  return 0;
}
