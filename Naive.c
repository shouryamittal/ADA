#include<stdio.h>
#include<string.h>
void naive(char t[],char p[],int n,int m)
{
	int s=0,i,j;
	for(s=0;s<n-m;s++)
	{
		for(i=0;i<=m;i++)
		{
			if(p[i]==t[s+i])
			{
				printf("%d is valid shift\n",s);
			}
			else
			{
				printf("%d is invalid shift\n",s);
			}
		}
	}
	
}
int main()
{
	char t[90],p[89],n,m;
	printf("Enter the text\n");
	scanf("%s",t);
	printf("Enter the pattern\n");
	scanf("%s",p);
	n=strlen(t);
	m=strlen(p);
	naive(t,p,n,m);
	return 0;
}