#include <stdio.h>
int checkPrime(int); //function declaration
void main()
{
    int a, str;
    printf("Enter a number\n");
    scanf("%d", &a);
    str = checkPrime(a); //calling the function named checkPrime.
    if (str == 1)
        printf("given number is a composite number\n");
    else if (str == 2)
        printf("given number is neither prime nor composite\n");
    else if (str == 0)
        printf("given number is a prime number\n");
    // printf("%d\n", str);
}
int checkPrime(int x) //function defention.
{
    int i;
    int flag;
    if (x == 1) //checking before entering loop whether given number is 1 or not.
        flag = 2;
    for (i = 2; i <= x / 2; i++) //checking whether given number is prime or composite.
    {
        if (x % i == 0)
            flag = 1;
            break;
        else
            flag = 0;
    }
    return flag; // returning value to main function from checkPrime function.
}
