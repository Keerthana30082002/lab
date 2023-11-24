#include<stdio.h>
#include<stdlib.h>
#define max 5
int queue[max],i;
int front=-1,rear=-1;
void insert();
void dele();
void display();
void main()
{
	int ch;
	while(1)
	{
		printf("\nCIRCULAR QUEUE\n");
		printf("\n 1-Insertion\n 2-Deletion\n 3-Display\n 4-exit\n");
		printf("\n Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:insert();
					break;
			case 2:dele();
					break;
			case 3:display();
					break;
			case 4:exit(0);
			default: printf("Invalid choice\n");
		}
	}
}
void insert()
{
	int e;
	printf("Enter the element to be inserted: ");
	scanf("%d",&e);
	if((rear+1)%max==front)
	printf("Overflow\n");
	else if(front==-1 && rear==-1)
	{
		front=rear=0;
		queue[rear]=e;
	}
	else
	{
		rear=(rear+1)%max;
		queue[rear]=e;
	}
}
void dele()
{
	if(front==-1 && rear==-1)
	printf("queue is empty");
	else if(front==rear)
	{
		printf("The Deleted Element is %d",queue[front]);
		front=rear=-1;
	}
	else
	{
	printf("The Deleted Element is %d",queue[front]);
	front=(front+1)%max;	
	}	
	}
void display()
{
	i=front;
	if(front==-1 && rear==-1)
	printf("Queue is empty");
	else
	while(i!=rear)
	{
		printf("%d\n",queue[i]);
		i=(i+1)%max;
	}
	printf("%d",queue[rear]);
}
