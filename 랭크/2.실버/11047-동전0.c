#include <stdio.h>

int stack[11];

int main(void){
    int n, k;
    int how = 0;

    scanf("%d %d", &n, &k);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &stack[i]);
    }
    
    for (int i = n - 1; i >= 0; i--)
    {
        if (k >= stack[i])
        {
            how += k / stack[i];
            k %= stack[i];
        }
    }

    printf("%d\n", how);

    return 0;
}