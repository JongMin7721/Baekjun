#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int find(int SET[200005], int start, int end, int M){
    if (start > end)
    {
        return 0;
    }

    int mid = (start + end) / 2;

    if (SET[mid] == M)
    {
        return 2;
    }else if (SET[mid] < M)
    {
        return find(SET, mid + 1, end, M);
    }else{
        return find(SET, start, mid - 1, M);
    }
}

int main(void){
    int N, M, inputSet;
    int val = 0;
    int SET[200005] = {0};

    scanf("%d %d", &N, &M);

    for (int i = 0; i < N; i++)
    {
        scanf(" %d", &SET[i]);
    }

    qsort(SET, N, sizeof(SET[0]), compare);
    
    for (int i = 0; i < M; i++)
    {
        scanf(" %d", &inputSet);
        val += find(SET, 0, N, inputSet);
    }

    printf("%d\n", N + M - val);
    
    return 0;
}