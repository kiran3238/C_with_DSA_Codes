//STACK  USING  ARRAY

#include<stdio.h>
int top=-1;
int size=0;
int flag=0;


int push(int stack[]){

	if (top==size-1){

		printf("Stack is Overflow\n");
		return -1;


	}else{

		int data;
		printf("Enter Data:\n");
		scanf("%d",&data);
		top++;
		if(top==0){
			flag =1;

		}

		stack[top]=data;
		return 0;

	}
}


int pop(int * stack){

	if(top==-1){

		printf("Stack is underflow\n");
		flag=0;
		return -1;

	}else{

		int data=*(stack+top);
		top--;

		return data;
	}
}
int peek(int stack[]){

	if(top==-1){


		printf("Stack is Empty\n");
		flag=0;
		return -1;

	}else{

		return stack[top];

	}
}




void main(){
	printf("Enter size of stack\n");
	scanf("%d",&size);
	int stack[size];
	char choice;


	do{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.peek\n");
		int ch;
		printf("Enter your choice:\n");
		scanf("%d",&ch);
		switch (ch){

			case 1:
				push(stack);
				break;
			
			case 2:
				{
				int ret=pop(stack);
				if (flag==1){
					
				printf("%d popped value\n",ret);
				}
				}	
				break;
				
			case 3:{
				int pvalue=peek(stack);
				if(flag==1){

				printf("%d is stack peek value\n",pvalue);
			       }

			       }
			       break;
			default:
				printf("wrong choice\n");
		}
		getchar();
		printf("Do you want to continue:\n");
		scanf("%c",&choice);
	}
	while(choice=='y' || choice=='Y');
}

