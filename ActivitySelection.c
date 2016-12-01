#include<stdio.h>
void actsel(int s[],int f[],int n)
{
	int i,j;
	i=0;j=0;
	printf("selected activity%d\n",i);
	for(j=1;j<=n;j++)
	{
		if(s[j]>=f[i])
		{
			printf("selected activity%d\n",j);
			i=j;
		}
	}
}
int main()
{
	int n,s[30],f[30],i;
	printf("Enter the number of activities");
	scanf("%d",&n);
	printf("Enter the starting time of activities");
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i]);
	}
	printf("Enter the finishing time of activities increasing order");
	for(i=0;i<n;i++)
	{
		scanf("%d",&f[i]);
	}
	actsel(s,f,n);
	return 0;
}