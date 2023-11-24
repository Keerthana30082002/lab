#include<stdio.h>
#include<stdlib.h>
struct node
{
	int info;
	struct node *prev,*next;
};
struct node *start=NULL;
int main()
{
	int choice,n;
	while(1)
	{
		printf("\t1.For Insertion at starting\n");
		printf("\t2.For Insertion at End\n");	
        printf("\t3.For Insertion at any position\n");
        printf("\t4.For deletion of first element\n");
        printf("\t5.For deletion at End\n");
		printf("\t6.For deletion of element at any position\n");
		printf("\t7.Display")
		printf("\t7.To exit\n");
		printf("\nEnter Choice :\n");
		scanf("%d", &choice);
		switch (choice)
    	 {
		case 1:insertAtFront();
				break;
		case 2:insertAtEnd();
				break;
		case 3:insertAtPosition();
				break;
		case 4:deleteFirst();
				break;
		case 5:deleteAtEnd();
				break;
		case 6:deletePosition();
				break;
		case 7:display();
				break;
		case 8:exit(1);
			
		default:printf("Incorrect Choice. Try Again \n");
				continue;
		}
	}
return 0;
}
