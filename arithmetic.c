#include<stdio.h>
int main()
{
    int choice;
    float a,b;
    printf("Enter two numbers:");
    scanf("%f %f",&a,&b);
    printf("\n 1.Addition\n 2.Subtraction\n 3.Multiplication\n 4.Division\n");
    printf("Enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:printf("Sum = %.2f",a+b);
        break;
        case 2:printf("Difference = %.2f",a-b);
        break;
        case 3:printf("Product = %.2f",a*b);
        break;
        case 4:
        if(b!=0)
        printf("Quotient = %.2f",a/b);
        else
        printf("Division by zero not possible");
        break;
        default:printf("Invalid choice");
    }
    return 0;
}


