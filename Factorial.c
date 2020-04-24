
#include <stdio.h>



int main()
{
    long number = 1;
    long answer;
     while (number !=0)
     {
         printf("\n Enter a number: ");
         scanf("%ld", &number);
         answer = 1;
         while (number > 1)
         answer = answer * number--;
         printf("Factorial is : %ld\n",answer);
     }
}
