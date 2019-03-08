#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,num1,num2,num3,num,result;
    printf("what operation do you want to do?!\n");
    printf("press 1 for addition\n");
    printf("press 2 for subtraction\n");
    printf("press 3 for product\n");
    printf("press 4 for division");
    scanf("%d",&n);
    printf("please enter a first number\n");
    scanf("%d",&num1);
    printf("please enter a second number\n");
    scanf("%d",&num2);
    printf("please enter a third number\n");
    scanf("%d",&num3);
    switch(n)
    {
        case 1:result=num1+num2;
        printf("addition of two numbers is %d", result);
        break;
        case 2:result=num1-num2;
        printf("subtraction of two numbers is %d", result);
        break;
        case 3:result=num1*num2*num3;
        printf("product of three numbers is %d",result);
        break;
        case 4:result=num/num;
        printf("division of three numbers%d",result);
        getch();
    }

    return 0;
}
