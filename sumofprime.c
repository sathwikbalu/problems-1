#include<stdio.h>
int main(){

  int n,limit,i,j,rem;
  scanf("%d",&limit );
  int sum=0;
  printf("prime numbers are:");
  for(i=3;i<=limit;i++){
    for(j=2;j<=i-1;j++){
    rem=i%j;
    if(rem==0){
      n=1;
      break;
    }
    else{
      n=0;

    }

  }

  if(n==0){
    printf("%d",i);
    sum+=i;


  }
}
printf("sum is %d",sum);
  return 0;
}
