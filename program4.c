//https://www.quora.com/Why-do-only-character-arrays-end-with-a-null-character-Why-not-integer-arrays
#include<stdio.h>
#include<string.h>
#define MAX 50
char stack[MAX];
int top=-1;
void push(char a)
{
	if(top==MAX-1)
	{
		printf("STACK IS FULL\n");
		return;
	}
	else 
		top++;
		stack[top]=a;

}
void pop(int j)
{	
	if(top==-1)
		{
			printf("NO ELEMENTS IN STACK\n");
			return;
		}
	else
		printf("%c",stack[j] );
}
int main()
{
	char a[MAX];
	printf("enter a string\n");
	scanf("%s",a);
	int size=strlen(a);
	for(int i=0;i<size;i++)
		push(a[i]);
	for(int j=top;j>-1;j--)
		pop(j);
}
