#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Snake
{
    int x, y;
    struct Snake *link;
} Snake;

typedef struct
{
    Snake *haed, *tail;
} Deque;

int arr[100][100]; // 0:빈칸 1:뱀 2:사과

void init(Deque *d);
void gosanke(Deque *d, int x, int y);
void snaketail(Deque *d);
void p(int size);

int main(void)
{
    Deque snake;
    int size, n, x, y, now_time = 0;
    int time[100], time_num = 0;
    char order[100]; // 0:오른쪽 1:왼쪽

    arr[0][0] = 1;

    scanf("%d", &size);

    scanf("%d", &n);
    for (int i = 0; i < n; i++) // 사과 위치
    {
        scanf("%d %d", &x, &y);
        arr[x - 1][y - 1] = 2;
    }

    scanf("%d", &n);
    for (int i = 0; i < n; i++) // 시간 및 방향
    {
        scanf("%d %c", &time[i], &order[i]);
    }

    init(&snake);

    int i = 0, j = 0;         // 현위치   i:상하 j:좌우
    int ip = 0, jp = 1;       // 이동방향
    int apple = 0, crash = 0; // 사과

    while (1)
    {

        now_time++;

        i += ip;
        j += jp;

        if (time[time_num] == now_time) // 시간에 따른 방향전환
        {
            if (ip > 0)
            {
                if ((int)order[time_num] == 'D')
                {
                    jp = -1;
                }
                else
                {
                    jp = 1;
                }
                ip = 0;
            }
            else if (ip < 0)
            {
                if ((int)order[time_num] == 'D')
                {
                    jp = 1;
                }
                else
                {
                    jp = -1;
                }
                ip = 0;
            }
            else if (jp > 0)
            {
                if ((int)order[time_num] == 'D')
                {
                    ip = 1;
                }
                else
                {
                    ip = -1;
                }
                jp = 0;
            }
            else if (jp < 0)
            {
                if ((int)order[time_num] == 'D')
                {
                    ip = -1;
                }
                else
                {
                    ip = 1;
                }
                jp = 0;
            }
            time_num++;
        }

        if (arr[i][j] == 2) // 사과 판단
        {
            apple = 1;
        }
        else if (arr[i][j] == 1)
        {
            crash = 1;
        }

        gosanke(&snake, i, j); // 뱀 이동

        if (i < 0 || i >= size || j >= size || j < 0 || crash) // 보드 이탈
        {
            printf("%d\n", now_time);
            return 0;
        }

        if (!apple) // 사과 없으면 꼬리제거
        {
            snaketail(&snake);
        }

        apple = 0;

        // printf("n_t:%d\ni:%d ip:%d\nj:%d jp:%d\nt_n:%d rl:%c\n", now_time, i, ip, j, jp, time[time_num], order[time_num]);
        // p(size);             //확인용
    }
    return 0;
}

void init(Deque *d)
{
    Snake *newsnake = (Snake *)malloc(sizeof(Snake));
    newsnake->link = NULL;
    newsnake->x = 0;
    newsnake->y = 0;

    d->haed = newsnake;
    d->tail = newsnake;
}

void gosanke(Deque *d, int x, int y)
{
    Snake *newsnake = (Snake *)malloc(sizeof(Snake));
    newsnake->link = NULL;
    newsnake->x = x;
    newsnake->y = y;

    arr[x][y] = 1;

    d->haed->link = newsnake;
    d->haed = newsnake;

    return;
}

void snaketail(Deque *d)
{
    Snake *ptr;

    ptr = d->tail;
    d->tail = ptr->link;

    arr[ptr->x][ptr->y] = 0;

    free(ptr);
}

void p(int size) // 확인용
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    printf("\n");
}