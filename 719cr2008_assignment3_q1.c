#include <stdio.h>

int main()
{
    int sale;
    printf("Enter the sale amount: ");
    scanf("%d", &sale);
    if (sale < 1000)
    {
        printf("The commission is %d\n", 0);
    }
    else if (sale < 25000)
    {
        printf("The commission is %f\n", (float)sale * 0.1);
    }
    else
    {
        printf("The commission is %f\n", (float)(200 + (sale - 1000) * 0.12));
    }
}