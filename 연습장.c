#include <stdio.h>
int main()
{
    int h, m, H, M;
    scanf("%d %d\n", &h, &m);
    scanf("%d", &M);
    if (0 <= m && m <= 59)
    {

        if (0 <= h && h < 23)
        {
            if ((m + M) < 60)
            {
                printf("%d %d", h, m + M);
            }
            else if ((m + M) >= 60)
            {

                H = (m + M) / 60;
                if ((h + H) >= 24)
                {
                    h = h - 24;
                }
                printf("%d %d", h + H, (m + M) % 60);
            }
        }
        else if (h == 23)
        {
            if ((m + M) < 60)
            {
                printf("%d %d", h, m + M);
            }
            else if ((m + M) >= 60)
            {
                H = (m + M) / 60;
                h = h + H - 24;
                printf("%d %d", h, (m + M) % 60);
            }
        }
    }
}