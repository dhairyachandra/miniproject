#include<stdio.h>
#include<conio.h>
#include"error.h"
void angry(char text[])
{
  
	int n,p,t,i,ch,c,j,y;
	y=error(text);
	if(y==0)
{
     freopen(text,"r",stdin);
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{   c=0;
	    scanf("%d%d",&n,&p);
	    for(i=0;i<n;i++)
	    {
		 scanf("%d,",&ch);

		if(ch<=0)
		c++;
	    }
	    if(c>=p)
		printf("\t ON \n ");
	    else
		printf("\t OFF \n ");
}}
else
	if(y==2)
	printf(" \n\t FILE IS EMPTY ");
	else
	printf(" \n\t YOUR INPUT FILE IS INVAILD  ");

	

}

