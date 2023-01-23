#include <stdio.h>

void print_star(int n);
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

    print_star(n);
}

void print_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (n > 9)
        {
            print_star(n / 3);
        }
        p2star(n);
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