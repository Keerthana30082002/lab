#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *prev,*next;
}*head,*last;
void createlist(int n);
void displaylist();
void display_backward();
void insertAtbeg(int);
void insertAtEnd(int);
void insertAtN(int,int);
int main()
{
	int n,data,choice=1;
	head=NULL;
	last=NULL;
	while(choice!=0)
	{
		printf("\nDoubly linked list program");
		printf("\n1.create list");
		printf("\n2.insert node at beginning");
		printf("\n3.insert node at end\n");
		printf("\n4.insert node at N");
		printf("\n5.Display list");
		printf("\n6.Display list in backward direction");
		printf("\n7.Exit");
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the total number of nodes in list: ");
					scanf("%d",&n);
					createlist(n);
					break;
			case 2:printf("Enter data of first node: ");
					scanf("%d",&data);
					insertAtbeg(data);
					break;
			case 3:printf("Enter the data of last node: ");
					scanf("%d",&data);
					insertAtEnd(data);
					break;
			case 4:printf("Enter the position where you want to insert the newnode: ");
					scanf("%d",&n);
					printf("Enter the data: ");
					insertAtN(data,n);
					break;
			case 5:displaylist();
					break;
			case 6:display_backward();
					break;
			case 7:exit(0);
			       break;
			default:printf("Wrong choice");
					}		
		
	}
	return 0;
}
void createlist(int n)
{
	int i,data;
	struct node *head;
	if(n>=1)
}
