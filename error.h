#include<stdio.h>
#include<conio.h>
int error(char text[])
{
	int c=0,t,i,n,p,ch;
	freopen(text,"r",stdin);
	if((scanf("%d",&t))<0)
	return 2;
	if(t<=0)
	 return 1;
	while(scanf("%d%d",&n,&p)==2)
	{	for(i=0;i<n;i++)
		{
			scanf("%d",&ch);
		}
	                    c++;
	}
	if(c==t)
		return 0;
	else
		return 1;


}
	