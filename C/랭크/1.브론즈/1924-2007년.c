#include <stdio.h>

int main(void)
{
    int x, y, sum = 0, month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    scanf("%d %d", &x, &y);

    for (int i = 0; i < x - 1; i++)
    {
        sum += month[i];
    }

    sum += y;

    switch (sum % 7)
    {
    case 0:
        printf("SUN\n");
        break;
    case 1:
        printf("MON\n");
        break;
    case 2:
        printf("TUE\n");
        break;
    case 3:
        printf("WED\n");
        break;
    case 4:
        printf("THU\n");
        break;
    case 5:
        printf("FRI\n");
        break;
    case 6:
        printf("SAT\n");
        break;
    }

    return 0;
}