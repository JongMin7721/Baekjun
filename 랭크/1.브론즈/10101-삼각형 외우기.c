#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    scanf("%d\n%d\n%d", &n1, &n2, &n3);

    if (n1 == n2 && n2 == n3 && n3 == 60)
    {
        printf("Equilateral\n");
    }
    else if (n1 + n2 + n3 == 180 && (n1 == n2 || n2 == n3 || n1 == n3))
    {
        printf("Isosceles\n");
    }
    else if (n1 + n2 + n3 == 180)
    {
        printf("Scalene\n");
    }
    else if (n1 + n2 + n3 != 180)
    {
        printf("Error\n");
    }

    return 0;
}