#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev,*next;
};
struct node *start=NULL;
void insertion(int n)
{  
    start = NULL;
   struct node *ptr,*temp;  
   int item,i;
   for(i=0;i<n;i++)
    {
        ptr = (struct node *) malloc(sizeof(struct node));
        if(ptr == NULL)  
        {  
            printf("\nOVERFLOW");  
        }   
        else  
        {  
            printf("\nEnter value %d : ",i+1);  
            scanf("%d",&item);  
            ptr->info=item;  
            if(start == NULL)  
            {  
                ptr->next = NULL;  
                ptr->prev = NULL;  
                start = ptr;  
            }  
            else  
            {  
                temp = start;  
                while(temp->next!=NULL)  
                {  
                    temp = temp->next;  
                }  
                temp->next = ptr;  
                ptr ->prev=temp;  
                ptr->next = NULL;  
            }  
        }
    }
    printf("\nLinked list created\n");  
}  
void display_forward()  
{  
    struct node *ptr;  
    printf("Elements in the linked list (forward) : ");  
    ptr = start;  
    while(ptr != NULL)  
    {  
        printf("%d\t",ptr->info);  
        ptr=ptr->next;  
    }  
}
void display_backward()  
{  
    struct node *ptr,*last;  
    printf("Elements in the linked list (backward) : ");  
    ptr = start;  
    while(ptr != NULL)  
    {  
        last = ptr;
        ptr=ptr->next;  
    }
    while(last != NULL)  
    {  
        printf("%d\t",last->info);  
        last=last->prev;  
    }   
}
	void insertAtFront()
	{
		int data;
		struct node *temp;
		temp=(struct node*)malloc(sizeof(struct node));
		printf("\nEnter the number to be inserted: ");
		scanf("%d",&data);
		temp->info=data;
		temp->prev=NULL;
		temp->next=start;
		start=temp;
	}
	void insertAtPosition()
	{
		int data,pos,i=1;
		struct node *temp,*newnode;
		newnode=(struct node*)malloc(sizeof(struct node));
		newnode->next=NULL;
		newnode->prev=NULL;
		printf("\nEnter Position: ");
		scanf("%d",&pos);
		printf("\nEnter number to be inserted: ");
		scanf("%d",&data);
		newnode->info=data;
		temp=start;
		if(start==NULL)
		{
			start=newnode;
			newnode->prev=NULL;
			newnode->next=NULL;
		}
		else if(pos==1)
		{
			newnode->next=start;
			newnode->next->prev=newnode;
			newnode->prev=NULL;
			start=newnode;
		}
		else
		{
			while(i<pos-1)
			{
				temp=temp->next;
				i++;
			}
			newnode->next=temp->next;
			newnode->prev=temp;
			temp->next=newnode;
			temp->next->prev=newnode;
		}
	}
 void deleteFirst()
{
	struct node* temp;
if (start == NULL)
printf("\nList is empty\n");
else {
temp = start;
start = start->next;
if (start != NULL)
start->prev = NULL;
free(temp);
}
}
void deletePosition()
{
int pos, i = 1;
struct node *temp, *position;
temp = start;
if (start == NULL)
printf("\nList is empty\n");
else
 {
printf("\nEnter position : ");
scanf("%d", &pos);
if (pos == 1)
 {
position = start;
start = start->next;
if (start != NULL)
 {
start->prev = NULL;
}
free(position);
return;
}
while (i < pos - 1) {
temp = temp->next;
i++;
}
position = temp->next;
if (position->next != NULL)
position->next->prev = temp;
temp->next = position->next;
free(position);
}
}
int main()
{
	int choice,n;
	while(1)
	{
		printf("\n\t1.To Display list\n");
		printf("\t2.display forward\n");
		printf("\t3.display backward\n");
		printf("\t4.For Insertion at starting\n");	
        printf("\t5.For insertion at any position\n");
        printf("\t6.For deletion of first element\n");
		printf("\t7.For deletion of element at any position\n");
		printf("\t8.To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);
		switch (choice)
    	 {
		case 1:printf("Enter the number of elements: ");
				scanf("%d",&n);
				insertion(n);
				break;
		case 2:display_forward();
				break;
		case 3:display_backward();
				break;
		case 4:insertAtFront();
				break;
		case 5:insertAtPosition();
				break;
		case 6:deleteFirst();
				break;
		case 7:deletePosition();
				break;
		case 8:exit(1);
				break;
		default:printf("Incorrect Choice. Try Again \n");
				continue;
		}
	}
return 0;
}
