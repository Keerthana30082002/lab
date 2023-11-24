#include<stdio.h>
#include<stdlib.h>
#define size 7
void deleteBeg();
void deleteAtPos();
void deleteEnd();
int arr[size],n;
void main()
{
	while(1)
	{
		int choice,n,i;
		printf("Enter the no of array elements: ");
		scanf("%d",&n);
		printf("Enter the array elements: \n");
		for(i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		printf("The Array elements are: ");
		for(i=0;i<n;i++)
		{
			scanf("%d\n",arr[i]);
		}
		printf("\n 1-Deletion at beginning\n 2-Deletion at position\n 3-Deletion at end\n");
		printf("\n Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:deleteBeg();
					break;
			case 2:deleteAtPos();
					break;
			case 3:deleteEnd();
					break;
			case 4:exit(0);
			default: printf("Invalid choice\n");
		}
	}
}
void deleteBeg()
{
	int i,data;
	if(n==0)
	printf("Array is empty.Deletion not possible.!!!");
	else
	{
		data=arr[0];
		for(i=0;i<n;i++)
		{
			arr[i]=arr[i+1];
		}
		n--;
		printf("%d is deleted ",data);
		printf("\n The array after deletion is: \n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
}
void deleteAtPos()
{
	int i,data,pos;
	if(n==0)
	printf("\nArray is empty.Deletion not possible!!!");
	else
	{
		printf("\nEnter the position to be deleted: ");
		scanf("%d",&pos);
		if(pos>n || pos<0)
		printf("\nDeletion not possible at this position: ");
		else
		{
			data=arr[pos-1];
			for(i=pos-1;i<n;i++)
			{
				arr[i]=arr[i+1];
			}
			n--;
			printf("%d is deleted",data);
			printf("\n The Array after deletion is :\n");
			for(i=0;i<n;i++)
			{
			printf("%d\n",arr[i]);	
			}
	}
}
void deleteEnd()
{
	int i,data;
	if(n==0)
	printf("Array is empty.Deletion not possible.!!!");
	else
	{
		data=arr[n-1];
		n--;
		printf("%d is deleted ",data);
		printf("\n The array after deletion is: \n");
		for(i=0;i<n;i++)
		{
			printf("%d\n",arr[i]);
		}
	}
}

