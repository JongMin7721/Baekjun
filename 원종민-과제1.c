#include <stdio.h>
#include <stdlib.h>

char lookahead;

void nexttoken();
void match(char token);
void seq();

int main()
{
    nexttoken();
    seq();
    if (lookahead == '$')
        printf("\n");
    else
        printf(" error\n");

    return 0;
}

void match(char token)
{
    if (lookahead == token)
        nexttoken();
    else
    {
        printf(" error\n");
        exit(1);
    }
}

void nexttoken()
{
    char c;
    while (1)
    {
        c = getchar();
        if (c == EOF)
        {
            lookahead = '$';
            return;
        }
        if (c == ' ' || c == '\t' || c == '\n' || c == '\0')
            continue;
        lookahead = c;
        return;
    }
}

void seq()
{
    int x = 0, y = 0;

    match('b');
    printf("(0,0) ");

    while (1)
    {
        if (lookahead == 'e')
        {
            match('e');
            x++;
        }
        else if (lookahead == 'n')
        {
            match('n');
            y++;
        }
        else if (lookahead == 'w')
        {
            match('w');
            x--;
        }
        else if (lookahead == 's')
        {
            match('s');
            y--;
        }
        else
            break;

        printf("(%d,%d) ", x, y);
    }

    return;
}