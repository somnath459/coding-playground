#include<stdio.h>
#include<string.h>

void reverseString(char str[], int i, int j){
    if(i>=j){
        printf("%s",str);
        return;
    }
    else{
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
        reverseString(str , i+1 ,j-1);
    }
}
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    reverseString(str , 0 , strlen(str)-1);
    return 0;
}