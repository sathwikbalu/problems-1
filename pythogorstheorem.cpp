#include<iostream>
using namespace std;

bool pyth(int x,int y,int z){

int a= max(x,max(y,z));
int b,c;
if(a==z){
  b=y;
  c=z;
}else if(a==y){
  b=x;c=z;

}else{
  a=x;b=y;c=z;
}
if (a*a==b*b+c*c){
  return true;
}
else{
  return false;
}

}


int main(){
int x,y,z;
cin>>x>>y>>z;
if (pyth(x,y,z)){
  cout<<"pytogoran triplet"<<endl;
}
else{
  cout<<"not"<<endl;
}







  return 0;
}
