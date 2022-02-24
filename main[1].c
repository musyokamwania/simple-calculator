#include <stdio.h>
#include <stdlib.h>

int main()
{
  int num1 , num2, add, subtruct, multiply;
  float divide;

  printf("Enter the values of num1 :");
  scanf("%d",&num1);
  printf("Enter the values of num2 :");
  scanf("%d",&num2);
  add      = num1 + num2;
  subtruct = num1 - num2;
  multiply = num1 * num2;
  divide   = num1 / (float)num2;
  printf("sum = %d\n",add);

  printf("difference = %d\n",subtructs);
  printf("multiplication = %d\n",multiply);
  printf("division = %.2f\n",divide);


    return 0;
}
