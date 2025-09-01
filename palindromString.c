#include<stdio.h>
#include<string.h>

void palindromString(char str[], int i, int j){
    if(i>=j){
        printf("The string is palindrom.");
        
        return;
    }
    else{
        if(str[i]==str[j]){
            palindromString(str , i+1 ,j-1);
        }
        else{
            printf("The string is not palindrom.");
            return;
        }
    }
}
int main(){
    char str[100];
    printf("Enter a string:");
    scanf("%[^\n]",str);
    palindromString(str , 0 , strlen(str)-1);
    return 0;
}