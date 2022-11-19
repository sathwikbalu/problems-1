#include<iostream>
using namespace std;
int main(){
  int vowels[]={3,7,18,9,11};
  int size=sizeof(vowels)/sizeof(vowels[0]);

  // cout<<sizeof(people)/sizeof(people[0])<<endl;
  // for (int i=0;i<5;i++){
  //   cout<<people[i];
  //
  //
  // }
  //
  // for(int ele:people){
  //   cout<<ele<<endl;
  // }
  // while(int j>0){
  //   cout<<people[j]<<endl;
  // }

int max=vowels[0];

for(int i=0;i<5;i++){
  if(vowels[i]>max){
    max=vowels[i];
  }
}
cout<<max<<endl;




  return 0;
}
