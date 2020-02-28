#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter Number: ");
    scanf("%d",&num);
    int sum = 0;
    int num1 = num;
    while(num1>0)
    {
        int x = num1%10;
        sum = sum + (x*x*x);
        num1 = num1/10;
    }

    if(num==sum)
        printf("Armstrong");
    else
        printf("Not Armstrong");
    return 0;
}
