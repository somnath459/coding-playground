/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*new1,*new2,*prev;
void create(){
    int n;char ch;
    printf("Enter the value :");
    scanf("%d",&n);
    head = (struct node*) malloc(sizeof(struct node));
    head->data=n;
    head->next = NULL;
    temp=head;
    printf("\n do you want to be continue:");
    getchar();
    ch = getchar();
    while(ch=='y'||ch=='Y'){
        printf("\n enter a value: ");
        scanf("%d",&n);
        new1=(struct node*) malloc(sizeof(struct node));
        new1->data=n;
        new1->next=NULL;
        temp->next=new1;
        temp=temp->next;
        getchar();
        printf("\n want to be continue:");
        ch=getchar();
        
    }
}
void display(){
    struct node *temp=head;
    if(head==NULL){
        printf("\n The linkedlist is empty.");
    }
    else{
        printf("-------linkedlist---------\n");
        while(temp!=NULL){
            printf("%d-> ",temp->data);
            temp=temp->next;
        }
        printf("NULL \n");
    }
    
}
void insertend(){
    int n;
    printf("enter the insert element: ");
    scanf("%d",&n);
    struct node*temp=head;
    new2=(struct node*) malloc(sizeof(struct node));
    new2->data=n;
    new2->next=NULL;
    while(temp->next!=NULL){
        temp=temp->next;
        prev=temp;
    }
    prev->next=new2;
}
void display1(){
    struct node *temp=head;
    if(head==NULL){
        head=new2;
    }
    else{
        printf("------- new linkedlist---------\n");
        while(temp!=NULL){
            printf("%d-> ",temp->data);
            temp=temp->next;
        }
        printf("NULL \n");
    }
    
}
int main(){
    create();
    display();
    insertend();
    display1();
    return 0;
}

