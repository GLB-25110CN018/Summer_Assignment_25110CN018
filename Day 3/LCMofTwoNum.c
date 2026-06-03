#include<stdio.h>
int main(){
    int num1,num2,LCM,max,i;
    printf("Enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    max=(num1>num2)?num1:num2;
    while(1){
       
        if(max%num1==0&&max%num2==0){
            LCM=max;
            break;
        }
        max++;
    }
    printf("LCM of the given Numbers is : %d",LCM);
    return 0;
}