#include<iostream>
using namespace std;
int binaryrsearch(int arr[],int size;int key){
int s=0;
int e=n;
whle(s<=e){
  int mid=(s+e)/2;
  if(arr[mid]==key){
    return mid;
  }
  else if(arr[mid]>key){
    e=mid-1;

  }
  else{
    s=mid+1;
  }

}
return -1;


}
int main(){
  int n;
  cin>>n;
int arr[n];
  for(int j=0;j<n;j++){
    cin>>arr[j];
  }
int key;
cin>>key;

cout<<binaryrsearch(arr,n,key)<<endl;
  return 0;
}
