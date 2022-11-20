#include<iostream>
using namespace std;



int main(){



int arr[]={1,2,3,4,5};
int max=arr[0];
int min=arr[0];
for(int i=0;i<5;i++){
  if(arr[i]>max){
    max=arr[i];

  }
}

for(int j=0;j<5;j++){
  if(arr[j]<min){
    min=arr[j];
    break;
  }
}

int add=min+max;
cout <<add<<endl;




return 0;
}
