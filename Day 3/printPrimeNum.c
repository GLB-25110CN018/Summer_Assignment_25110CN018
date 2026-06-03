#include<stdio.h>

int main(){
    int num1 , num2,flag;
    printf("Enter starting and ending number to find prime numbers in ranmge \n");
    scanf("%d%d", &num1,&num2);
    printf("Prime Numbers within range are: ");
    for(int i= num1;i<num2;i++){
        flag=0;
        for (int j=2;j<i;j++){
            if(i%j==0){
            flag++;
            }
        }
        if(flag==0){
            printf("%d  ",i);
        }
    }
return 0;
}