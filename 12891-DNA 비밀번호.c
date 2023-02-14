#include <stdio.h>

void inp(int pass[4], char cha);
void outp(int pass[4], char cha);
int check_p(int pass[4], int rpass[4]);

int main(void)
{
    int S, P, pass[4] = {0}, rpass[4], chk = 0;
    char password[1000003];

    scanf("%d %d\n%s\n%d %d %d %d", &S, &P, password, &rpass[0], &rpass[1], &rpass[2], &rpass[3]);

    for (int i = 0; i < S; i++)
    {
        inp(pass, password[i]);
        if (i >= P)
        {
            outp(pass, password[i - P]);
        }

        if (i >= P - 1)
        {
            chk += check_p(pass, rpass);
        }
    }

    printf("%d\n", chk);
}

void inp(int pass[4], char cha)
{
    if (cha == 'A')
    {
        pass[0]++;
    }
    else if (cha == 'C')
    {
        pass[1]++;
    }
    else if (cha == 'G')
    {
        pass[2]++;
    }
    else if (cha == 'T')
    {
        pass[3]++;
    }
}

void outp(int pass[4], char cha)
{
    if (cha == 'A')
    {
        pass[0]--;
    }
    else if (cha == 'C')
    {
        pass[1]--;
    }
    else if (cha == 'G')
    {
        pass[2]--;
    }
    else if (cha == 'T')
    {
        pass[3]--;
    }
}

int check_p(int pass[4], int rpass[4])
{
    int ch = 0;
    for (int i = 0; i < 4; i++)
    {
        if (pass[i] < rpass[i])
        {
            ch++;
        }

        if (ch > 0)
        {
            return 0;
        }
    }

    return 1;
}