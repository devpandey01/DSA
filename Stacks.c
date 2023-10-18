//Stack follows FIRST IN LAST OUT
//Importing libraries
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

//Declaring variables
int i,n,x,value,choice; 
int top = -1; //top points to the topmost variable in stack
int st[5];

//create stack
/*void create(){
	printf("Enter the size of stack: ");
	scanf("%d",&n);
}*/

//push function to add element in stack
void push(value){
	if(top==SIZE-1){
		printf("Stack overflow\n");
	}
	else{
		top++;
		st[top]=value;
	}
}

//pop function to delete element from stack
int pop(){
	x=-1;
	if(top==-1){
		printf("Stack underflow\n");
	}
	else{
		x=st[top];
		top--;
	}
	return x;
}

//peek function returns the topmost element of the stack
void peek(){
	if(top==-1){
		printf("Stack is empty\n");
	}
	else{
		printf("Topmost element of the stack is %d",st[top]);
	}
}

//display function to print all elements of stack according to definition
void display(){
	for(i=top;i>=0;i--){
		printf("%d",st[i]);
	}
}


//main function with menu driven code
void main(){
	while(1){
		//create();
		printf("--------MENU--------\n");
		printf("1. push\n");
		printf("2. pop\n");
		printf("3. peek\n");
		printf("4. display\n");
		printf("5. exit\n");
		printf("Enter choice: ");
		scanf("%d",&choice);

		switch(choice){
			case 1:
			printf("Enter value: ");
			scanf("%d",&value);
			push();
			break;

			case 2:
			pop();
			printf("%d is deleted",x);
			break;

			case 3:
			peek();
			break;

			case 4:
			display();
			break;

			case 5:
			exit(0);
			break;
		}
	}
}
