#include<stdio.h>
int main()
{
	int a[30],size,item,flag=0,pos,i,beg,end,mid;
	printf("Enter the size of the array");
	scanf("%d",&size);
	printf("Enter the array elements\n");
	for( i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to be searched for\n");
	scanf("%d",&item);
	beg=0;
	end=size-1;
	
	while(beg<=end)
	{
		mid=(beg+end)/2;
		if(item==a[mid])
		{
			flag=1;
			printf("Element found at position %d",mid+1);
			break;
		}
		 if(item<a[mid])
		{
			end=mid-1;
		}
		if(item>a[mid])
		{
			beg=mid+1;
		}

	}

	if(flag==0)
	{
		printf("Element not found\n");
	}
	
	return 0;
}