#include<stdio.h>
#include<string.h>
#include<math.h>

#define d 256
void rk(char P[],char T[],int q)

{	int m,n;
	int h,p=0,t=0,i,j,s;
	m=strlen(P);
	n=strlen(T);
	printf("value of m is%d\n",m);
	printf("value of n is%d\n",n);
	 h = 1;

  // The value of h would be "pow(d, M-1)%q"
 	 for (i = 0; i < m-1; i++)
    h = (h*d)%q;
	printf("value of h is%d\n",h);
	for(i=1;i<m;i++)
	{
		p=(d*p+P[i])%q;
		t=(d*t+T[i])%q;
	}
	printf("value of p is%d\n",p);
	printf("value of t is%d\n",t);
	for(s=0;s<=n-m;s++)
	{
		if(p==t)
		{
			for(i=0;i<=m;i++)
			{
				if(P[i]!=T[s+i])
				{
					printf("Invalid shift \n");
					break;
				}
				if(P[i]==T[s+i])
				{
					printf("Pattern found at %d\n",s+1);
				}
			}
				
		}

		if(s<n-m)
		{
			t=(d*(t-h*T[s+1])+T[s+m])%q;

			if(t<0)
			{
				t=t+q;
			}
			printf("value of t again is%d\n",t);
		}
	}

}

int main()
{
	char P[20],T[20];
	int q;
	printf("Enter text\n");
	scanf("%s",T);
	printf("Enter pattern\n");
	scanf("%s",P);
	printf("Enter the value of q\n");
	scanf("%d",&q);
	rk(P,T,q);

	return 0;
}