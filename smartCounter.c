#include <stdio.h>

int main(void)
{
    int counter, num1, num2;

    printf("--------------------------------------------\n");
    printf("\t\tSMART COUNTER\n\n");
    printf("Choose the first number: ");
    scanf("%i", &num1);
    printf("Choose the second number: ");
    scanf("%i", &num2);

    if (num1 < num2)
    {   
        counter = num1;
        while (counter <= num2)
        {   
            printf("\n%d", counter);
            counter = counter + 1;
        }
    } else if (num1 > num2)
    {
        counter = num1;
        while (counter >= num2)
        {
            printf("\n%d", counter);
            counter = counter - 1;
        }
    }
    
    return 0;
}
