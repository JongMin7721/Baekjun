#include <stdio.h>

void print_star(int n, int check);
void p13star(int n);
void p2star(int n);

int main(void)
{
    int n, lg = 0;

    scanf("%d", &n);

    for (int i = n; i != 1; i /= 3)
    {
        lg++;
    }

    print_star(n, 1);
}

void print_star(int n, int check)
{
    if (n == 1)
    {
        if (check)
        {
            printf("*");
            return;
        }
        else
        {
            printf(" ");
            return;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (n - i == 2 && n - j == 2)
            {
                print_star(n / 3, 0);
            }
            else
            {
                print_star(n / 3, check);
            }
        }
        printf("\n");
    }
}

void p13star(int n)
{
    for (int i = 0; i < n * 3; i++)
    {
        printf("*");
    }
    printf("\n");
}

void p2star(int n)
{
    int i = 0;
    for (; i < n; i++)
    {
        printf("*");
    }
    for (; i < n * 2; i++)
    {
        printf(" ");
    }
    for (; i < n * 3; i++)
    {
        printf("*");
    }
    printf("\n");
}