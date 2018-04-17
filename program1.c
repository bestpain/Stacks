//Stack implementation using array.
#include<stdio.h>
int top=-1;	
void push(int a[],int data,int size)
{
	if(top==size-1)
	{
		printf("stack is full\n");
		return ;
	}
	top++;
	a[top]=data;
}
void pop(int a[])
{
	if(top==-1)
	{
		printf("no elements to POP\n");
		return;
	}
	top--;

}
void printstack(int a[])
{
	if(top==-1)
	{	printf("STACK is EMPTY\n");
		return;
	}
	for(int i=top;i>=0;i--)
		printf("%d\n",a[i] );
	
}

int main()
{
	int size,input;
	printf("enter the size of stack\n");
	scanf("%d",&size);
	int stack[size];
	
	while(1){
		printf("Enter 1 to PUSH\n");
	printf("Enter 2 to POP\n");
	printf("Enter 3 to DISPLAY\n");
	printf("Enter 4 to EXIT\n");
	scanf("%d",&input);
	switch(input)
	{
		case 1:
		{
		int a;
		printf("enter the element to push\n");
		scanf("%d",&a);
		push(stack,a,size);
		break;
		}
		case 2:
		{
			pop(stack);
			break;
		}
		case 3:
		{
			printstack(stack);
			break;
		}
		case 4:
			return 0;
		default:
		printf("invalid input ,try again\n");	
	}
}
}
