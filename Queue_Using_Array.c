4(a).//QUEUE USING ARRAY PROGRAM
#include <stdio.h>
#define MAX 50
int queue[MAX];
int rear = - 1;
int front = - 1;

void enqueue(int data)
{
    if (rear == MAX - 1)
    printf("Queue Overflow \n");
    else
    {
        if (front == - 1)  /*If queue is initially empty */
        {
        	front = 0;
		}
        rear = rear + 1;
        queue[rear] = data;
        printf("Element inserted is : %d\n", queue[rear]);
    }
}

void dequeue()
{
    if (front == - 1 || front > rear)
    {
        printf("Queue Underflow \n");
        return ;
    }
    else
    {
        printf("\nElement deleted is : %d\n", queue[front]);
        front = front + 1;
    }
} 

void display()
{
    int i;
    if (front == - 1)
        printf("Queue is empty \n");
    else
    {
        printf("Queue is : \n");
        for (i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
} /* End of display() */
int main()
{
	enqueue(10);
	enqueue(20);
	enqueue(30);
	enqueue(50);
	enqueue(50);
	enqueue(60);
	
	display();
	
	dequeue();
	dequeue();
	display();
	return 0;
}

OUTPUT:
Element inserted is : 10
Element inserted is : 20
Element inserted is : 30
Element inserted is : 50
Element inserted is : 50
Element inserted is : 60
Queue is : 
10 20 30 50 50 60 
Element deleted is : 10

Element deleted is : 20
Queue is : 
30 50 50 60
