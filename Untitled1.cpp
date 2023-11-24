void traverse()
{
	if(start==NULL)
	printf("\nList is empty\n");
	else
	{
		struct node *temp;
		temp=start;
		while(temp!=NULL)
		{
			printf("Data=%d\n",temp->info);
			temp=temp->next;
		}
	}
}
