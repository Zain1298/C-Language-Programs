
#include <stdio.h>

void main(void) {
	char ch = 'a';
	while ( ch != '\r') 
	{
		printf("Enter a character: \n");
		ch=getchar();
		printf("\nThe code for %c is %d.\n",ch,ch);
	}
}
