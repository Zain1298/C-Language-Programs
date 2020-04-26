
#include <stdio.h>

int main() {
	struct easy {
		int num;
		char ch;
	};
	
	struct easy ez1;
	
	ez1.num = 2;
	ez1.ch= 'z';
	printf("ez1.num=%d,ez1.ch=%c\n",ez1.num,ez1.ch);
}

