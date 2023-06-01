//STACK USING LINKED-LIST

#include<stdio.h>
#include<stdlib.h>

typedef struct node{
	int data;
	int flag=0;
	struct node *next;

}node;

node *head=NULL;
node *top=NULL;

node * createnode(){

	node *newnode=(node*)malloc(sizeof(node*));

	printf("Enter Data:\n");
	scanf("%d",&newnode->data);

	newnode->next=NULL;
	return newnode;
}
void addnode(){

	node *newnode=createnode();

	if(head==NULL){

		head=newnode;

	}else{
		node*temp=head;

		while(temp->next!=NULL){

			temp=temp->next;

		}
		temp->next=newnode;

	}
}

