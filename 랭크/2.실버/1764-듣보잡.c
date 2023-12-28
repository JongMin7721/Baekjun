#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char Names[500005][22];
char Names2[500005][22];

int compare(const void *A, const void* B){
    return strcmp((char*)A, (char*)B);
}

char *findName(char *name, int start, int end){
    if (start > end)
    {
        return "Er";
    }

    int mid = (start + end) / 2;
    
    if (!strcmp(Names[mid], name))
    {
        return Names[mid];
    }else if (strcmp(Names[mid], name) > 0)
    {
        return findName(name, start, mid - 1);
    }else{
        return findName(name, mid + 1, end);
    }
}

int main(void){
    int N, M, inc = 0;
    char name[22];

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf("%s", Names[i]);
    }

    qsort(Names, N, sizeof(Names[0]), compare);

    for (int i = 0; i < M; i++)
    {
        scanf("%s", name);
        if (strcmp(findName(name, 0, N),"Er"))
        {
            strcpy(Names2[inc++], findName(name, 0, N));
        }
    }

    printf("%d\n", inc);

    qsort(Names2, inc, sizeof(Names2[0]), compare);
    
    for (int i = 0; i < inc; i++)
    {
        printf("%s\n", Names2[i]);
    }
    
    return 0;
}