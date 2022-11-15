#include <stdio.h>
int main()
{
    //Declaring the variables along with datatype
    int num1, num2, sum;


    printf("Enter the first number: ");
    scanf("%d", &num1); //read the first number

    printf("Enter the second number: ");
    scanf("%d", &num2); //read the second number

    sum = num1 + num2; //sum the two numbers

    //Display the result
    printf("The sum of numbers is: %d",sum);

    return 0;
}
