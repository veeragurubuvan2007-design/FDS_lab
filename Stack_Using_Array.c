3.(a)   //  STACK USING ARRAY PROGRAM
#include<stdio.h>
int stack[100],n,top,i;
void push(int x)
{
    if(top>=n-1)
    {
        printf("\n STACK is over flow");
    }
    else
    {
        top++;
        stack[top]=x;
        printf("\n element pushed into stack:%d",x);
    }
}
void pop()
{
    if(top<=-1)
    {
        printf("\n Stack is under flow");
    }
    else
    {
        printf("\n The popped elements is %d",stack[top]);
        stack[top] = 0;
        top--;
    }
}
void display()
{
    if(top>=0)
    {
        printf("\n The elements in STACK: \n");
        for(i=top; i>=0; i--)
            printf("%d \n",stack[i]);
    }
    else
    {
        printf("\n The STACK is empty");
    }
   
}




int main()
{
	top = -1;
	n = 5;
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	push(60);

	display();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
}

OUTPUT:

 element pushed into stack:10
 element pushed into stack:20
 element pushed into stack:30
 element pushed into stack:40
 element pushed into stack:50
 STACK is over flow
 The elements in STACK: 
50 
40 
30 
20 
10 

 The popped elements is 50
 The popped elements is 40
 The popped elements is 30
 The popped elements is 20
 The popped elements is 10
 Stack is under flow
 Stack is under flow
