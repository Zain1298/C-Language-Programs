
#include <stdio.h>

void main(void) {

int count = 0;
int total =0;
while (count < 10) {
	total = total + count;
	printf("count=%d, total=%d\n",count++,total);
	
}

}
