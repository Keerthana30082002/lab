#include<stdlib.h>
#include<stdio.h> 
#define size 10 
struct node   
{  
    int data;  
    struct node *next;   
};  
struct node *head;  
  
void insertBeg();   
void insertEnd();  
void insertAtPos();  
void deleteBeg();  
void deleteEnd();  
void deleteAtPos();  
void display();  
void search();  
void main()  
{  
    int choice;  
    while(1)   
    {  
        printf("\n\n*********Main Menu*********\n");  
        printf("\nChoose one option from the following list ...\n");  
        printf("\n===============================================\n");  
        printf("\n1.Insert in beginning\n2.Insert at last\n3.Insert at any random location\n4.Delete from Beginning\n5.Delete from last\n6.Delete node after specified location\n7.Search for an element\n8.Show\n9.Exit\n");  
        printf("\nEnter your choice: \n");         
        scanf("\n%d",&choice);  
        switch(choice)  
        {  
            case 1:  
            insertBeg();      
            break;  
            case 2:  
            insertEnd();         
            break;  
            case 3:  
            insertAtPos();       
            break;  
            case 4:  
            deleteBeg();       
            break;  
            case 5:  
            deleteEnd();        
            break;  
            case 6:  
            deleteAtPos();          
            break;  
            case 7:  
            search();         
            break;  
            case 8:  
            display();        
            break;
			case 9:
			exit(0);    
            default:
            printf("Please enter valid choice..");  
        }  
    }  
}  
void insertBeg()  
{  
    struct node *newnode;  
    int item;  
    newnode = (struct node *) malloc(sizeof(struct node *));  
    if(head == NULL)  
    {  
        head=newnode;
    }  
    else  
    {  
        printf("\nEnter value\n");    
        scanf("%d",&item);    
        newnode->data = item;  
        newnode->next = head;  
        head = newnode;  
        printf("\nNode inserted");  
    }  
      
}  
void insertEnd()  
{  
    struct node *newnode,*temp;  
    int item;     
    newnode = (struct node*)malloc(sizeof(struct node));      
    if(head == NULL)  
    {  
        head=newnode;   
    }  
    else  
    {  
        printf("\nEnter value: \n");  
        scanf("%d",&item);  
        newnode->data = item;  
            temp = head;  
            while (temp -> next != NULL)  
            {  
                temp = temp -> next;  
            }  
            temp->next = newnode;  
            newnode->next = NULL;  
            printf("\nNode inserted");  
        }  
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
}
}  
void deleteBeg()  
{  
    struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
        printf("\nNode deleted from the begining ...\n");  
    }  
}  
void deleteEnd()  
{  
    struct node *ptr,*ptr1;  
    if(head == NULL)  
    {  
        printf("\nlist is empty");  
    }  
    else if(head->next==NULL)  
    {  
        head = NULL;  
        free(head);  
        printf("\nOnly node of the list deleted ...\n");  
    }       
    else  
    {  
        ptr = head;   
        while(ptr->next != NULL)  
        {  
            ptr1 = ptr;  
            ptr = ptr ->next;  
        }  
        ptr1->next = NULL;  
        free(ptr);  
        printf("\nDeleted Node from the last ...\n");  
    }     
}  
void deleteAtPos()  
{  
    struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
    printf("\nDeleted node %d ",loc+1);  
}  
void search()  
{  
    struct node *ptr;  
    int item,i=0,flag;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("\nEmpty List\n");  
    }  
    else  
    {   
        printf("\nEnter item which you want to search?\n");   
        scanf("%d",&item);  
        while (ptr!=NULL)  
        {  
            if(ptr->data == item)  
            {  
                printf("item found at location %d ",i+1);  
                flag=0;  
            }   
            else  
            {  
                flag=1;  
            }  
            i++;  
            ptr = ptr -> next;  
        }  
        if(flag==1)  
        {  
            printf("Item not found\n");  
        }  
    }     
          
}  
  
void display()  
{  
    struct node *ptr;  
    ptr = head;   
    if(ptr == NULL)  
    {  
        printf("Nothing to print");  
    }  
    else  
    {  
        printf("\nprinting values . . . . .\n");   
        while (ptr!=NULL)  
        {  
            printf("\n%d",ptr->data);  
            ptr = ptr -> next;  
        }  
    }  
}     

