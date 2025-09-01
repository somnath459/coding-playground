#include<stdio.h>
#define MAX_SIZE 5

int stack[MAX_SIZE];
int top= -1;
void push(int value){
    if(top==MAX_SIZE-1){
        printf("The stack is overflow !\n");
    }
    else{
        stack[++top]=value;
        printf(" %d push into stack.\n ",value);
    }
}
void pop(){
    if(top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("The deleted element is [%d] from posttion of [%d] .", stack[top--],top+1);
    }
}
void isEmpty(){
    if(top==-1){
        printf("The stack is empty.\n");
    }
    else{
        printf("There are elements in stack.\n");
    }
}
void isFull(){
    if(top==MAX_SIZE-1){
        printf("The stack is full. \n");
    }
    else if(top >=0){
        printf("There are elements is stack.\n");
    }
}
void display(){
    if(top==-1){
        printf("The stack is empty. \n");
    }
    else{
        printf("Stack elements :\n ");
        for(int i=top; i>=0; i--){
            printf(" %d ",stack[i]);
            
        }
    }
}
int main(){
    while(1){
        int choice;
        printf("-----------stack operations-------------\n");
        printf(" 1.push \n 2.pop \n 3.isEmpty \n 4.isFull \n 5. display \n");
        printf("Which operation want to choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:
                int value;
                printf("Enter the value for push:");
                scanf("%d",&value);
                push( value);
            break;
            case 2: pop();
            break;
            case 3: isEmpty();
            break;
            case 4: isFull();
            break;
            case 5: display();
            break;
            default:
            printf("Invalid choice!");
        }
    }
    return 0;
}