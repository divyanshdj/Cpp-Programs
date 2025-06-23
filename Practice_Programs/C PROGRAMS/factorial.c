#include <stdio.h>
int main()
{
    int n, i, s = 1, neg;

    printf("Enter Number For Factorial : ");
    scanf("%d", &n);

    if (n <= 0)
    {
        n = neg;
    };

    // if (n == neg)
    // {
    //     printf("The Number is Invalid\n\n");
    // }
    // else
    // {
    //     for (i = 1; n >= i; i++)
    //     {
    //         s = s * i;
    //     };
    // };

    switch (n)
    {
    case 5 :
    {
        printf("The Number is Invalid\n\n");
        break;
    }
    default:
        for (i = 1; n >= i; i++)
        {
            s = s * i;
        };
    }

    printf("Factorial : %d", s);

    return 0;
}