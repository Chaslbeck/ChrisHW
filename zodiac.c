/*Chris Haslbeck*/

#include <stdio.h>
int main(void){

	int month = 0;

	scanf("%d", &month);

	if(month == 1) {
	printf("Your month is January.\nYour sign is Capricorn\n");
	}
	if(month == 2) {
	printf("Your month is February.\nYour sign is Aquarius\n");
	}
	if(month == 3) {
	printf("Your month is March.\nYour sign is Pisces\n");
	}
	if(month == 4) {
	printf("Your month is April\nYour sign is Aries\n");
	}
	if(month == 5) {
	printf("Your month is May\nYour sign is Taurus\n");
	}
	if(month == 6) {
	printf("Your month is June\nYour sign is Gemini\n");
	}
	if(month == 7) {
	printf("Your month is July\nYour sign is Cancer\n");
	}
	if(month == 8) {
	printf("Your month is August\nYour sign is Leo\n");
	}
	if(month == 9) {
	printf("Your month is September\nYour sign is Virgo\n");
	}
	if(month == 10) {
	printf("Your month is October\nYour sign is Libra\n");
	}
	if(month == 11) {
	printf("Your month is November\nYour sign is Scorpio\n");
	}
	if(month == 12) {
	printf("Your month is December\nYour sign is Sagittarius\n");
	}
	if(month <=0) {
	printf("This month does not exist\n");
	}
	if(month >12) {
	printf("This month does not exist\n");
	}

return 0;
}


