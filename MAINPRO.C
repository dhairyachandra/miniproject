#include"dibyendu.h"
#include"ronnie.h"
#include<string.h>
int main()
{
	int i;
	char text[15];
	
	printf("\n\n\t\t\tCHOICE\n\n");
	
	printf("\n\t(1) Angry professor \t\t (2) Probality of prime no \n");
     printf("\n\n ENTER YOUR CHOICE :  ");  
	scanf("%d",&i);
	switch(i)
	{
		case 1:  printf("\n\tEnter The File Name ");
			    scanf("%s",text);
				printf("\n");
			   angry(text);
			   break;
		case 2:  printf("\n\tEnter The File Name ");
			    scanf("%s",text);
				printf("\n");
			    prime(text);
			    break;
		default : printf("\n\t CHOICE YOU ENTERED IS INVAILD ");
	}
	// getch();
	return 0;
}



