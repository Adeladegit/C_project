#include <stdio.h>
int number1, number2, result, sum,minus,substract,division, option;
   int main(void){
printf("Enter first number: ");
  scanf("%d", &number1);

printf("\nselect an option.\n" );
 printf("1. sum\n");
 printf("2. minus\n");
 printf("3. sustract\n");
 printf("4. division\n");

printf("Select option(1-4): ");
    scanf(" %lc", &option); 

printf("\nEnter second number: ");
  scanf("%d", &number2); 

        if(option == '1'){

          sum = number1 + number2;
            printf("the sum is: %d\n", sum);
        }
        else if(option == '2'){

          minus = number1 - number2;
            printf("the minus is: %d\n", minus);
        }
        else if(option == '3'){

          substract = number1 * number2;
            printf("the substract is: %d\n", substract);
        }
         else if(option == '4'){

          division = number1 / number2;
            printf("the division is: %d\n", division);
        }
        else {
            printf("invalid option! Please selecte the valid option. ");
        }



return 0;
}