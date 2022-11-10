#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) // 11720번
{
    int n, sum = 0;
    scanf("%d ", &n);

    char *num = (char *)malloc(sizeof(char) * n);

    scanf("%s", num);
    for (int i = 0; i < strlen(num); i++)
    {
        sum += (int)num[i] - '0'; //입력받은 숫자의 아스키 코드에서 0의 아스키 코드를 빼면 정수값이 나옴
    }
    printf("%d", sum);

    return 0;
}