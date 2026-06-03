#include<stdio.h>
int main(){
    int num1,num2,temp,GCD;
    printf("Enter Two Numbers\n");
    scanf("%d%d",&num1,&num2);

    //using Euclidean Method

    while(num2!=0){
        temp=num2;
        num2=num1%num2;
        num1=temp;
        GCD=num1;
    }
printf("The GCD of The given Numbers is: %d",GCD);

return 0;
}
