#include<stdio.h>
 int main()
{
	int a[30],size,item,flag=0,pos,i;
	printf("Enter the size of the array");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for( i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched for\n");
	scanf("%d",&item);
	for(i=0;i<size;i++)
	{
		if(a[i]==item)
		{
			flag=1;
			pos=i;
			break;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("Element found at position %d",pos+1);
	}
	else
	{
		printf("Element not found\n");
	}
	return 0;
}