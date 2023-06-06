#include<stdio.h>
long long Fibo(long long n){
if(n==0 || n==1){
return 1;
}
else{
return (Fibo(n-1)+Fibo(n-2));
}
}
int main(){
long long n;
scanf("%d",&n);
int t = Fibo(n);
printf("%lld",t);
return 0;
} 