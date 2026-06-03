#include<stdio.h>
int main(){
  int n ,flag=0;
 printf("enter a number");
 scanf("%d",&n);
 for(int i = 2; i<n ;i++){
    if(n%i==0){
        flag++;
    }
 }
 if(flag==0 ){
    printf("Number is prime");
 }else{
    printf("Numbers is not prime");
 }

return 0;
}