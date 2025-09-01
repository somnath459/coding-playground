#include<stdio.h>
void powerFunction(int n, int i,int j,int value){
    if(j==0&&n==0){
        printf("MATH ERROR!\n");
        return;
    }
    else if(j==0){
        printf("The value is 1. \n");
        return;
    }
    else if(n==0){
        printf("The value is 0. \n");
    }
    else{
        if(i>j){
            
            printf("The value is %d .",value);
            return;
        }
        else{
            value=value*n;
            powerFunction(n,i+1,j,value);
        }
    }
}
int main(){
    int n , j;
    printf("Enter base:");
    scanf("%d",&n);
    
    printf("Enter exponent:");
    scanf("%d",&j);
    powerFunction(n,1,j,1);
    return 0;
}