/*Chris Haslbeck*/
#include <stdio.h>
int main(void) {

	int rice = 13;

	char yeet1 = 'A'||'M'||'Z'||'z'||'a';
	char yeet2 = 'A'||'M'||'Z'||'z'||'a';
	char yeet3 = 'A'||'M'||'Z'||'z'||'a';
	char yeet4 = 'A'||'M'||'Z'||'z'||'a';
	char yeet5 = 'A'||'M'||'Z'||'z'||'a';

	printf("Type a letter:");
	scanf(" %c", &yeet1);
	printf("Type a letter:");
	scanf(" %c", &yeet2);
	printf("Type a letter:");
	scanf(" %c", &yeet3);
	printf("Type a letter:");
	scanf(" %c", &yeet4);
	printf("Type a letter:");
	scanf(" %c", &yeet5);

		if(yeet1 >= 'A' && yeet1 <= 'M'){
		yeet1 = yeet1+rice;
		}else if(yeet1 > 'M' && yeet1 <= 'Z'){
		yeet1 = yeet1-rice;
		}else if(yeet1 >= 'a' && yeet1 <= 'z'){
			printf("There is a lowercase letter try again.\n");
		}else if(yeet1 < 'A' || yeet1 > 'Z' || yeet1 < 'a' || yeet1 < 'z'){
			printf("There is an invalid character try again.\n");
		}

		if(yeet2 >= 'A' && yeet2 <= 'M'){
                yeet2 = yeet2+rice;
                }else if(yeet2 > 'M' && yeet2 <= 'Z'){
                yeet2 = yeet2-rice;
		}else if(yeet2 >= 'a' && yeet2 <= 'z'){
			printf("There is a lowercase letter try again.\n");
		}else if(yeet2 < 'A' || yeet2 > 'Z' || yeet2 < 'a' || yeet2 < 'z'){
			printf("There is an invalid character try again.\n");
                }

	        if(yeet3 >= 'A' && yeet3 <= 'M'){
                yeet3 = yeet3+rice;
                }else if(yeet3 > 'M' && yeet3 <= 'Z'){
                yeet3 = yeet3-rice;
		}else if(yeet3 >= 'a' && yeet3 <= 'z'){
			printf("There is a lowercase letter try again.\n");
		}else if(yeet3 < 'A' || yeet3 > 'Z' || yeet3 < 'a' || yeet3 < 'z'){
			printf("There is an invalid character try again.\n");
                }

	        if(yeet4 >= 'A' && yeet4 <= 'M'){
                yeet4 = yeet4+rice;
                }else if(yeet4 > 'M' && yeet4 <= 'Z'){
                yeet4 = yeet4-rice;
		}else if(yeet4 >= 'a' && yeet4 <= 'z'){
			printf("There is a lowercase letter try again.\n");
		}else if(yeet4 < 'A' || yeet4 > 'Z' || yeet4 < 'a' || yeet4 < 'z'){
			printf("There is an invalid character try again.\n");
                }

	        if(yeet5 >= 'A' && yeet5 <= 'M'){
                yeet5 = yeet5+rice;
                }else if(yeet5 > 'M' && yeet5 <= 'Z'){
                yeet5 = yeet5-rice;
		}else if(yeet5 >= 'a' && yeet5 <= 'z'){
			printf("There is a lowercase letter try again.\n");
		}else if(yeet5 < 'A' || yeet5 > 'Z' || yeet5 < 'a' || yeet5 < 'z'){
			printf("There is an invalid character.\n");
                }

	printf("Your new word is: %c%c%c%c%c\n",yeet1,yeet2,yeet3,yeet4,yeet5);

return 0;
}
