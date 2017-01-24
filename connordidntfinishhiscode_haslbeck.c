//Chris Haslbeck
#include <stdio.h>
#include <string.h>
int main(void){

	FILE *fp;
	fp=fopen("connordidntfinishhiscode_haslbeck.txt","r");

	int max=10;
	int didntcallinafunction[max];

	int eightbytesin32bits;
	for(eightbytesin32bits=0;eightbytesin32bits<max;eightbytesin32bits++){
		fscanf(fp,"%d", &didntcallinafunction[eightbytesin32bits]);
	}

	int hegota66;
	for(hegota66=0;hegota66<max;hegota66++){
		printf("%d\n", didntcallinafunction[hegota66]);
	}

	fclose(fp);

return 0;
}
