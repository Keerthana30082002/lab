#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *head=NULL;
int size=0;
void insertBeg()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("Enter the element to be inserted: ");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		newnode->next=head;
		head=newnode;
	}
	size++;
}
void insertEnd()
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("Enter the element to be inserted: ");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
	}
	size++;	
}
void insertAtPos()
{
	int pos;
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->next=NULL;
	printf("Enter the element to be inserted: ");
	scanf("%d",&newnode->data);
	if(head==NULL)
	{
		printf("\nEmpty Linked List!!");
	}
	else
	{
		printf("Enter the position: ");
		scanf("%d",&pos);
		if(pos<0 || pos>size+1)
			print("Invalid Position!!");
		else
		{
			printf("Enter the element");
			scanf("%d",&newnode->data);
			if(pos==1)
			{
				newnode->next=head;
				head=newnode;
			}
			else
			{
				int i=1;
				struct node *temp;
				temp=head;
				while(i<pos-1)
				{
					temp=temp->next;
					i++;
				}
				newnode->next=temp->next;
				temp->next=newnode;
			}
		}
	
	size++;
}
}
void display()
{
	if(head==NULL)
		printf("Empty Linked List!!");
	else
	{
		struct node *temp;
		temp=head;
		while(temp->next!=NULL)
		{
			printf("%d",&temp->data);
			temp=temp->next;
			}	
		printf("%d",&temp->data);
	}
}
int main()
{
	int choice;
	printf("LINKED LIST IMPLEMENTATION");
	printf("--------------------------");
	while(1)
	{
	printf("\n1-Insertion at beginning \n 2-Insertion at end \n 3-Insertion at position \n 4-display \n 5-exit");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:insertBeg();
				break;
		case 2:insertEnd();
				break;
		case 3:insertAtPos();
				break;
		case 4:display();
				break;
		case 5:exit(0);
		default:printf("Wrong choice!!!");
				
	}
}
return 0;
}
