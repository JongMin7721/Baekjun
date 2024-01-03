#include <stdio.h>

int main(void)
{
    int n1, n2, n3;

    scanf("%d %d %d", &n1, &n2, &n3);

    do
    {
        if (n1 >= n2 + n3 || n2 >= n1 + n3 || n3 >= n1 + n2)
        {
            printf("Invalid\n");
        }
        else if (n1 == n2 && n2 == n3)
        {
            printf("Equilateral\n");
        }
        else if (n1 == n2 || n2 == n3 || n1 == n3)
        {
            printf("Isosceles\n");
        }
        else if (n1 != n2 && n2 != n3 && n1 != n3)
        {
            printf("Scalene\n");
        }

        scanf("%d %d %d", &n1, &n2, &n3);

    } while (n1 != 0 && n2 != 0 && n3 != 0);

    return 0;
}