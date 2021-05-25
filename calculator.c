#include <stdio.h>

int main()
{
    float a,b;
    char operation;
    printf("Enter the first number\n");
    scanf("%f", &a);
    printf("Enter the operation\n");
    scanf(" %c", &operation);
    printf("Enter the second number\n");
    scanf("%f", &b);
    switch (operation)
    {
    case '+':
        printf("Answer is : %f \n",a+b);
        break;
    case '-':
        printf("Answer is : %f \n",a-b);
        break;
    case '*':
        printf("Answer is : %f \n",a*b);
        break;
    case '/':
        printf("Answer is : %f \n",a/b);
        break;
    
    default:
    printf(" The Lord Prince Lakhera ");
    break;
    }
return 0;
}
