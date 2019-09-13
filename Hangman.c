#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int score=0,rando=0;
    	system("clear");
    	FILE *sp;
    	int c;
    	sp=fopen("instuctions.txt","r");
    	if(sp==NULL)
    	{
		printf("error reading file");
		exit(10);
    	}
    	while((c=fgetc(sp))!=EOF)
		putchar(c);
    	fclose(sp);
    	while(1)
    	{
        	srand(time(NULL));
        	int x= (rand()+rando++)%24;
        	char guest,word[20]="\0"; 
		char 
		mname[24][20]={"avengers",
				"rocky",
				"deadpool",
				"narnia",
				"frozen",
				"taken",
				"annabelle",
				"titanic",
				"avatar",
				"inception",
				"interstellar",
				"martian",
				"cars",
				"ratatouille",
				"transformers",
				"rio",
				"tangled",
				"pixels",
				"thor",
				"wanted",
				"madagascar",
				"twilight",
				"dumbo",
				"divergent"};
        	int count=6,k=0,j,length,l;
		printf("Hint1:\t");
        	char copy[20]="\0",z;
        	switch(x)
        	{
            		case 0:
                    		printf("The Highest Grossing Marvel Movie Of All Time");
                    		strcpy(word,mname[0]);
                    		break;
            		case  1:
                    		printf("The Greatest Boxing Movie Of All Time");
                   		strcpy(word,mname[1]);
                    		break;
            		case 2:
                    		printf("Chimichanga!!!!");
                    		strcpy(word,mname[2]);
                    		break;
           		case 3:
                    		printf("The Lion,The Witch And The Wardrobe..");
                    		strcpy(word,mname[3]);
                    		break;
            		case 4:
                    		printf("Let It GO!!!");
                    		strcpy(word,mname[4]);
                    		break;
            		case 5:
                   	 	printf("I Don't Know Who You Are But I Will Find You And I Will Kill You");
                    		strcpy(word,mname[5]);
                    		break;
            		case 6:
                    		printf("Prequel To The Conjuring");
                   		strcpy(word,mname[6]);
                    		break;
            		case 7:
                    		printf("My Heart Will Go On");
                    		strcpy(word,mname[7]);
                    		break;
            		case 8:
                    		printf("Highest Grossing Movie Of All Time");
                    		strcpy(word,mname[8]);
                    		break;
            		case 9:
                    		printf("A Dream Within A Dream");
                    		strcpy(word,mname[9]);
                    		break;
            		case 10:
                    		printf("Love That Transcends Dimensions");
                    		strcpy(word,mname[10]);
                    		break;
            		case 11:
                    		printf("Space Grown Potatoes");
                    		strcpy(word,mname[11]);
                    		break;
            		case 12:
                    		printf("The Pixar Movie Personifing Automobiles");
                    		strcpy(word,mname[12]);
                    		break;
            		case 13:
                    		printf("The Rat Chef");
                    		strcpy(word,mname[13]);
                    		break;
            		case 14:
                    		printf("Autobots-Let's GO");
                    		strcpy(word,mname[14]);
                    		break;
            		case 15:
                    		printf("Hi I'm Blu,I'm A Bird That Can't Fly");
                    		strcpy(word,mname[15]);
                    		break;
            		case 16:
                    		printf("Disney's Rapunzel");
                    		strcpy(word,mname[16]);
                    		break;
            		case 17:
                    		printf("Pac-Man,Galatica,Adam Sandler");
                    		strcpy(word,mname[17]);
                    		break;
            		case 18:
                    		printf("The True Prince Of Asgard");
                    		strcpy(word,mname[18]);
                    		break;
            		case 19:
                    		printf("Bending Bullets");
                    		strcpy(word,mname[19]);
                    		break;
            		case 20:
                    		printf("I Like To Move-It");
                    		strcpy(word,mname[20]);
                    		break;
            		case 21:
                    		printf("A Vegetarian Vampire");
                    		strcpy(word,mname[21]);
                    		break;
            		case 22:
                    		printf("Flying Circus Elephant");
                    		strcpy(word,mname[22]);
                    		break;
            		case 23:
                    		printf("Abnegation,Candor,Erudite,Dauntless,Amity");
                    		strcpy(word,mname[23]);
                    		break;
        	}
        	length=strlen(word);
		printf("\nHint2:\tThe Of Letters Are=%d\n",length);
        	for(j=0;j<length;j++)
        	{	
          		 copy[j]='*';
           	 	printf("%c",copy[j]);
        	}
		printf("\n");
        	while(count!=0)
        	{
			printf("Enter Your Guess=");
            		scanf("%c%c",&guest,&z);
            		for(j=0;j<length;j++)
            		{
                		if(guest==word[j])
                		{
                    			copy[j]=guest;
					score=score+10;
                    			k=1;
                		}
                		else
                    			continue;
            		}
			if(strcmp(copy,word)==0)
			{
				printf("\nCorrect Answer\('-')/\tThe Movie Is '%s'\n\n\n\n",word);
				printf("\tYour Score Is=%d\n",score);
				break;
			}
            		else if(k==1)
                		printf("%s\t\t\t\t\tLives Remaining:%d\n",copy,count);
            		else
            		{
                		count--;
				score=score-10;
                		printf("%s\t\t\t\t\tLives Remaining:%d\n",copy,count);
           		}
            		k=0;
        	}
        	if(count==0)
		{
            		printf("Too Bad:( :(\nThe Movie Is '%s'\n",word);
			printf("\tYour Score Is=%d\n",score);
			printf("......................Game Over......................\n");
			break;
		}
		else 
		{
			char e;
			printf("To Exit Hit e\nTo continue press c=");
			scanf("%c%c",&e,&z);
			if(e=='e')
			{
				printf("......................Game Over......................\n");
				break;
			}
			else if(e=='c')
			{
				printf("......................................................\n\n\n");
				continue;
			}
		}
	}

	return 0;
}

hangman.c
Page 3 of 5 Page 2 of 5
