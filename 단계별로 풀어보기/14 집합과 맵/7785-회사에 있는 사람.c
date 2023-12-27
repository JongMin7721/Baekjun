#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    return strcmp((char*)b, (char*)a);
}

int main(void){
    int n;
    char name[10], ELstatus[10];
    char ELname[100010][10];
    
    scanf("%d", &n);
    
    for(int i = 0; i < n; i++){
        scanf("%s %s", name, ELstatus);
        strcpy(ELname[i], name);
    }

    qsort(ELname, n, sizeof(ELname[0]), compare);
    
    int stack = 1;

    for (int i = 1; i <= n; i++)
    {
        if (!strcmp(ELname[i-1], ELname[i]))
        {
            stack++;
            continue;
        }

        if (stack % 2 == 1)
        {
            printf("%s\n", ELname[i-1]);
        }
        
        stack = 1;
    }
    

    return 0;
}