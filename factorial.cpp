#include<iostream>
using namespace std;

int main(){
int a;
cin>>a;
int factorial=1;
for(int i=1;i<=a;i++){
  factorial*=i;
}
cout<<factorial<<endl;

return 0;
}
