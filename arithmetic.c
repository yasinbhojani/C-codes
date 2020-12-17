#include <stdio.h>
int ans;
int main()
{
    int arth;
    int x, y;
    printf("\n\n\t===== ARITHMETIC =====\n");
    printf("\nEnter any number from the following list\n");
    printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n\nInput:");
    scanf("%d", &arth); //taking input from user of operation to be performed

    printf("\nEnter two values for arithmetic operations\n");
    scanf("%d %d", &x, &y); //taking values from user for arithmetic operation

    switch (arth)
    {
    case 1:
        ans = add(x, y);
        break;
    case 2:
        ans = sub(x, y);
        break;
    case 3:
        ans = mul(x, y);
        break;
    case 4:
        ans = divi(x, y);
        break;
    default:
        printf("Enter a valid number\n");
    }

    printf("\nAnswer=%d\n\n", ans);
    return 0;
}
int add(int x, int y) //Addition function
{
    ans = x + y;
    return ans;
}

int sub(int x, int y) //Subtraction function
{
    ans = x - y;
    return ans;
}

int mul(int x, int y) //Multiplication function
{
    ans = x * y;
    return ans;
}

int divi(int x, int y) //Division function
{
    ans = x / y;
    return ans;
}