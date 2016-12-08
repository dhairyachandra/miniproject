#include"dibyendu.h"
#include"ronnie.h"
#include<string.h>
int main()
{
	int i;
	char text[15];
	printf("\n\n\n\t\t\t\t\t MINI PROJECT (3rd SEMESTER)\n\n\n");
	printf("\n  INTRODUCTION  :\n\n \t This program is combination of two programs:  \n\n\t 1) Angry Prof :   ");
	 printf("To check whether class is held or cancelled depending \n \t\t\t   upon students present at beginning of class.\n\n\t ");
 	printf("2) Probability :  To find the probability of Prime Number in a given range.\n\n\n\n\n  HOW TO USE  :\n\n\t");
	
                        printf("User have to choice either  1 or 2 to run either the angry prof or prime no program.\n\tThen program will tell user to input a file."); 
	printf("User must provide the file name to run this program .");
	printf("\n\n\t\t Enter any key to continue...\n ");
                        getch();
	
	printf("\n\n\t\t\tCHOICE\n\n");
	
	printf("\n\t(1) Angry professor \t\t (2) Probality \n");
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



