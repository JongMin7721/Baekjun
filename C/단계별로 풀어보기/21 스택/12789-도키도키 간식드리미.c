#include <stdio.h>

int main(void){
    int n, m, st = 1, ce = 0;
    int stack[1005];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);

        if (m == st)
        {
            st++;
            while (stack[ce-1] == st)
            {
                ce--;
                st++;
            }
        }else{
            stack[ce++] = m;
        }
    }
    
    if (ce == 0)
    {
        printf("Nice\n");
    }else{
        printf("Sad\n");
    }

    return 0;
}