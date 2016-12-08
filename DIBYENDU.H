#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int prime1(int i)
{
	int j,c=0;
	for(j=i;j>=1;j--)
	{
		if(i%j==0)
		c++;
	}
	if(c==2)
	return 0;
	else
	return 1;
}
int error1(char text[])
{
	int i=0,t,n,p,ch;
	freopen(text,"r",stdin);
	if(scanf("%d",&t)<0)
	return 2;
	if(t<=0)
		return 1;
	while(scanf("%d%d",&n,&p)==2)
	{
	                    i++;
	}
	if(i==t)
		return 0;
	else
		return 1;


}


void prime(char text[])
{
  	int n,p,y;
	int t,i,ch,d,j,c;
	float b;
	y=error1(text);
    if(y==0)
	{
      freopen(text,"r",stdin);
	 scanf("%d",&t);
	 for(j=0;j<t;j++)
	{       d=0;c=0;
		scanf("%d%d",&n,&p);
		{
			for(i=n;i<=p;i++)
			{
				ch=prime1(i);
				if(ch==0)
					d++;
				c++;

			}
			b=(float)d/c;
			printf("\n\t probality is %f ",b);
		}
	}
	}
	else
		if(y==2)
		printf(" \n\t FILE IS EMPTY ");
		else
		printf("\n\t  YOUR INPUT FILE IS INVAILD ");
}

