#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);

printf("No of 2000 rupee notes %d \n",n/2000);
n%=2000;



printf("No of 1000 rupee notes %d \n",n/1000 );

n%=1000;

printf("No of 500 rupee notes %d \n",n/500 );

n%=500;

printf("No of 200 rupee notes %d \n",n/200 );

n%=200;

printf("No of 100 rupee notes %d \n",n/100 );

n%=100;

printf("No of 50 rupee notes %d \n",n/50 );

n%=50;

printf("No of 10 rupee notes %d \n",n/10 );

n%=10;
printf("No of 5 rupee notes %d \n",n/5 );

n%=5;
printf("No of 1 rupee notes %d \n",n/1 );
n%=1;


return 0;
}
