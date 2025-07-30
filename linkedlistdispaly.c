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
// i. void insertNode(int value): This function should insert a new node
// with the given value at the end of the linked list.
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
// ii. void deleteNode(int value): This function should delete the node
//with the given value from the linked list.
void deletenode(int value){
    struct node*temp=head,*pre;
    if(head==NULL){
        printf("The head is not find.");
        return;
    }
    if(head->data==value){
        temp=head;
        head=head->next;
        free(temp);
    }
    else{
        while(temp!=NULL&&temp->data!=value){
            pre = temp;
            temp=temp->next;
            
        }
        pre->next=temp->next;
        free(temp);
    }
}
void display2() {
    struct node *temp = head;

    if (head == NULL) {
        printf("The linked list is empty.\n");
        return;
    }

    printf("------- Edited Linked List ---------\n");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main(){
    create();
    display();
    insertend();
    display1();
    deletenode(3);
    display2();
    return 0;
}