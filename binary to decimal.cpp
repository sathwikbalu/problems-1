#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

int power=1;
int ans=0;

while(n>0){
    int party_digit=n%2;
    ans=ans+(party_digit*power);
    power*=10;
    n=n/2;


}
cout<<ans<<endl;




    return 0;
}
