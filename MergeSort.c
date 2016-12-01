#include<stdio.h>
void mergesort(int a[],int p,int q)
{
	if(p<q)
	{
		int r=p+(q-p)/2;
		mergesort(a,p,r);
		mergesort(a,r+1,q);
		merge(a,p,r,q);
	}
}
merge(int a[],int p,int r,int q)
{
	
	int n1=r-p+1;
	int n2=q-r,i,j;
	int L[n1],R[n2];
	int k;
	for(i=0;i<n1;i++)
	{
		L[i]=a[p+i];
	}
	for(j=0;j<n1;j++)
	{
		R[j]=a[r+1+j];
	}
	i=0;j=0;k=p;

	while(i<n1 && j<n2)
	{
		if(L[i]<R[j])
		{
			a[k]=L[i];
			i++;
		}
		if(R[j]<L[i])
		{
			a[k]=R[j];
			j++;
		}
		k++;
	}

	while(i<n1)
	{
		a[k]=L[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		a[k]=R[j];
		j++;
		k++;
	}

}
int main()
{
	int i,j,a[90],n;
	printf("Enter the array size\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	mergesort(a,0,n-1);
	printf("Sorted array is");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}

	return 0;
}