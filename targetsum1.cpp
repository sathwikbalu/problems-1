#include<iostream>
using namespace std;


int main(){
  int pairs=0;
  int x=10;








  int arr[]={3,4,6,7,1};
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      int sum=arr[i]+arr[j];
      if(x==sum){
        pairs++;
      }

    }
  }

cout<<pairs<<endl;






  return 0;
}
