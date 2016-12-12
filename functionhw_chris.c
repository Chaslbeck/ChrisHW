//Chris Haslbeck

#include <stdio.h>

void hours(int *budget, int *money, int *rice);
void pdays(int *budget, int *money, int *rice);
void overtime(int *budget, int *money, int *rice);
void insurance(int *budget, int *money, int *rice);
void final(int *budget, int *money, int *rice);

int main(void){

//Variables

	int budget;
	int money;
	money=0;
	int rice;

//Initial Budget

	printf("Enter in the total budget of the North Pole: ");
	scanf(" %d",&budget);

	int asian;
	asian=0;

//Menu Loop

	while(asian!=1){

		int menuchoice;

		printf("\n1.) Add hours\n");
		printf("2.) Add Personal Days\n");
		printf("3.) Add Overtime\n");
		printf("4.) Add Insurance\n");
		printf("5.) Compare Expenses to Budget\n");
		printf("6.) Exit Program\n");
		printf("\nEnter in a choice: ");
		scanf(" %d",&menuchoice);


		if(menuchoice==1){
			hours(&budget,&money,&rice);
		}
		else if(menuchoice==2){
			pdays(&budget,&money,&rice);
		}
		else if(menuchoice==3){
			overtime(&budget,&money,&rice);
		}
		else if(menuchoice==4){
			insurance(&budget,&money,&rice);
		}
		else if(menuchoice==5){
			final(&budget,&money,&rice);
		}
		else if(menuchoice==6){
			break;
		}
		else{
			printf("Please pick a valid number\n");
		}

	}
	return 0;
}

//Pointer Functions


void hours(int *budget, int *money, int *rice){
	printf("How many hours did the elves work? : ");
	scanf(" %d", rice);
}

void pdays(int *budget, int *money,int *rice){
	printf("How many personal days did the elves take? : ");
	scanf(" %d", rice);
}

void overtime(int *budget, int *money, int *rice){
	printf("How many overtime hours did the elves work? : ");
	scanf(" %d", rice);
}

void insurance(int *budget, int *money, int *rice){
	printf("How many times did the elves need dental work? : ");
	scanf(" %d", rice);
}

/*
**The function prints out the total budget and expenses, and how much over and under the budget it is.
*/

void final(int *budget, int *money, int *rice){
	printf("The total expense for the northpole is $%d.\n",*money);
	printf("The total budget for the northpole is $%d.\n",*budget);

	*budget=*budget-*money;

	if (*budget < 0){
		printf("Thats is $%d under budget.\n",*budget);
	}else{
		*budget=*budget*-1;
		printf("That is $%d over budget.\n",*budget);
	}
}
