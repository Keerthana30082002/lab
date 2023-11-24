#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m,n,a[20][20],i,j,item;
	printf("Enter the number of rows and columns of the matrix: ");
	scanf("%d%d",&m,&n);
	printf("Enter the elements: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Enter a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	printf("The 2 Dimensional Array is: ");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&item);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i][j]==item)
			{
				printf("%d found at %d row and %d column",item,i+1,j+1);
				exit(0);
			}
			printf("Item Not Found");
		}
	}
}
