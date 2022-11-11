#include<iostream>

    using namespace std;
int main() {
    int num;
    int count;
    cin>>num;
    while(num>0){
        int parity=num%2;
        if(parity==0){
            count++;
        }num/=2;
    }cout<<count<<endl;

    return 0;
}





    