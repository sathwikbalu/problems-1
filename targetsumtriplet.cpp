#include<iostream>
using namespace std;


int main(){
  int pairs=0;
  int x=8;
  int arr[]={3,4,6,7,1};
  for(int i=0;i<5;i++){
    for(int j=i+1;j<5;j++){
      for(int k=j+1;k<5;k++){




      int sum=arr[i]+arr[j]+arr[k];
      if(x==sum){
        pairs++;
      }
    }

    }
  }
cout<<pairs<<endl;
  return 0;
}
