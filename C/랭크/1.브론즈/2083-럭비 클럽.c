#include <stdio.h>

int main(void)
{
    int age, weight;
    char name[11];

    scanf("%s %d %d", name, &age, &weight);

    while ((int)name != '#' && age != 0 && weight != 0)
    {
        printf("%s ", name);
        if (age > 17 || weight >= 80)
        {
            printf("Senior\n");
        }
        else
        {
            printf("Junior\n");
        }

        scanf("%s %d %d", name, &age, &weight);
    }

    return 0;
}