//Chris Haslbeck
#include <stdio.h>
void print_board(char array[][3]);
void fill_array(char array[][3]);
void play(char array[][3]);
int winner(char array[][3]);
int main(void){

	char array[3][3];
	fill_array(array);
	print_board(array);
	play(array);

return 0;
}

void print_board(char array[][3]){

	printf("   #   #   \n");
	printf(" %c # %c # %c \n", array[0][0], array[0][1], array[0][2]);
	printf("   #   #   \n");
	printf("##########\n");
	printf("   #   #   \n");
	printf(" %c # %c # %c \n", array[1][0], array[1][1], array[1][2]);
	printf("   #   #   \n");
	printf("##########\n");
	printf("   #   #   \n");
	printf(" %c # %c # %c \n", array[2][0], array[2][1], array[2][2]);
	printf("   #   #   \n");

}

void fill_array(char array[][3]){

	array[0][0]='1';
	array[0][1]='2';
	array[0][2]='3';
	array[1][0]='4';
	array[1][1]='5';
	array[1][2]='6';
	array[2][0]='7';
	array[2][1]='8';
	array[2][2]='9';

}

void play(char array[][3]){

	int move;
	int i;

	for(i=0;i<9;i++){

		printf("\nPlease type in an open space to make a move: ");
		scanf("%d", &move);

		if(move==1){
			if(array[0][0] != 'X' && array[0][0] != 'O'){
				if(i%2==0){
					array[0][0]= 'X';
				}else{
					array[0][0]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==2){
			if(array[0][1] != 'X' && array[0][1] != 'O'){
				if(i%2==0){
					array[0][1]= 'X';
				}else{
					array[0][1]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==3){
			if(array[0][2] != 'X' && array[0][2] != 'O'){
				if(i%2==0){
					array[0][2]= 'X';
				}else{
					array[0][2]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==4){
			if(array[1][0] != 'X' && array[1][0] != 'O'){
				if(i%2==0){
					array[1][0]= 'X';
				}else{
					array[1][0]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==5){
			if(array[1][1] != 'X' && array[1][1] != 'O'){
				if(i%2==0){
					array[1][1]= 'X';
				}else{
					array[1][1]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==6){
			if(array[1][2] != 'X' && array[1][2] != 'O'){
				if(i%2==0){
					array[1][2]= 'X';
				}else{
					array[1][2]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==7){
			if(array[2][0] != 'X' && array[2][0] != 'O'){
				if(i%2==0){
					array[2][0]= 'X';
				}else{
					array[2][0]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==8){
			if(array[2][1] != 'X' && array[2][1] != 'O'){
				if(i%2==0){
					array[2][1]= 'X';
				}else{
					array[2][1]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		if(move==9){
			if(array[2][2] != 'X' && array[2][2] != 'O'){
				if(i%2==0){
					array[2][2]= 'X';
				}else{
					array[2][2]= 'O';
				}
			}else{
				printf("\nThat space has a letter already... try again\n\n");
				i=i-1;
			}
		}

		print_board(array);
	}
}

int winner(char array[][3]){

	int i;
	int j;

	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			if(array[i][j] == array[i][j+1]){
				return 1;
			}
			else if(array[i][j] == array[i+1][j]){
				return 1;
			}
			else if(array[i][j] == array[i+1][j+1]){
				return 1;
			}
		}
	}
return 0;
}
