#include<stdio.h>
int main()
{
	int r,c,i,j,element,count=0,a[r][c];
	printf("Enter the no of rows and columns: ");
	scanf("%d%d",&r,&c);
	if(r<=0||c<=0)
	{
		printf("Only positive values are accepted");
		return 0;
	}
	printf("Enter %d elements:\n",(r*c));
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("Enter a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("Enter the element to be searched: ");
	scanf("%d",&element);
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(a[i][j]==element);
			{
				printf("%d%d\n",i,j);
				count=1;
			}
		}
	}
	if(count==0)
	printf("NOT FOUND\n");
	return 0;
	}
