#include <stdio.h>
#include <memory.h>

int main(void)
{
    FILE *fp1, *fp2;
    char c[10];
    fp1 = fopen("a.txt", "r");
    fp2 = fopen("b.txt", "w");

    if (fp1 == NULL)
    {
        printf("Error!\n");

        return 1;
    }

    while (fgets(c, sizeof(c), fp1) != NULL)
    {
        fputs(c, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    fp2 = fopen("b.txt", "r");

    while (feof(fp2) == 0)
    {
        fgets(c, sizeof(c), fp2);
        printf("%s", c);
        memset(c, 0, sizeof(c));
    }

    fclose(fp2);

    return 0;
}