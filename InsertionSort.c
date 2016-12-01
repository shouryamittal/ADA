#include<stdio.h>

int main()
{
	int a[40],i,j,size,key;
	printf("\n Enter the size of the array\n");
	scanf("%d",&size);
	printf("\n Enter the array to be sorted\n");
	for(i=0;i<size;i++)
	{
		scanf("\n%d",&a[i]);
	}

	for(i=1;i<size;i++)
	{
		j=i-1;
		key=a[i];
		while(j>=0 && a[j]>key)
		{
			a[j+1]=a[j];
			j=j-1;
		}
		a[j+1]=key;
	}
	printf("\n Array after sorting");
	for(i=0;i<size;i++)
	{
		printf("\n%d",a[i]);
	}


	

	return 0;
}
