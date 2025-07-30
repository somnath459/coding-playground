#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *head=NULL,*temp,*new1;
void create(){
    int n;char ch;
    printf("Enter the value :");
    scanf("%d",&n);
    head = (struct node*) malloc(sizeof(struct node));
    head->data=n;
    head->next = NULL;
    temp=head;
    printf("\n Do you want to be continue(y/n):");
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
        printf("\n Want to be continue(y/n):");
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
// counting the number of element in the linked-list.
void count(){
    struct node*temp=head;
    int count=0;
    if(head==NULL){
        printf("The node is not found.");
        
    }
    else{
        while(temp!=NULL){
            count++;
            temp=temp->next;
        }
    }
    printf("The value of total element is linkedkist is: %d",count);
}
// search of an element from user defined linked--list.
void search(){
    struct node*temp=head;
    int flag=0;
    if(head==NULL){
        printf("\n The linked is not found.");
        
    }
    else{
        
        int n;
        printf("\nEnter the element for searching:");
        scanf("%d",&n);
        while(temp!=NULL){
            if(temp->data==n){
                flag=1;
                break;
            }
            temp=temp->next;
        }
    }
    if(flag==1){
        printf("\nThe element is found.");
    }
    else{
        printf("\nThe element is not found.");
    }
        
}
int main(){
    create();
    display();
    count();
    search();
    return 0;
}