#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
#define max 5
struct node *top=NULL;
void push(int value){
    struct node *newnode;
    
    
    newnode = (struct node*)malloc(sizeof(struct node));
    
   
    if(newnode==NULL){
        printf("The stack is overflow. \n");
        return;
    }
    else{
        newnode->data=value;
        newnode->next=top;
        top=newnode;
        printf("%d pushed into stack.\n",value);
        
    }
}

void pop(){
    if(top==NULL){
        printf("The stack is empty.\n");
        return;
    }
    else{
        struct node *temp;
        temp=top;
        printf("%d poped from stack.\n",temp->data);
        top=top->next;
        free(temp);
    }
}
void display(){
    if(top==NULL){
        printf("The stack is empty.\n");
        return;
    }
    else{
        struct node *temp=top;
        printf("The stack elements are:");
        while(temp!=NULL){
            
            printf(" %d ",temp->data);
            temp=temp->next;
        }
        printf("\n");
        
    }
}
void isEmpty(){
    
}
int main(){
    
    push(10);
    push(20);
    push(30);
    push(40);
    display();
    pop();
    display();
    return 0;
}