#include <stdio.h>

int main()
{

    int c, r;
    scanf("%d %d", &r, &c);

    int arr[c][r];
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (arr[i][j] == 0)
            {
                flag = 0;
            }
        }
    }

    if (flag)
        printf("NO");
    else
        printf("YES");

    return 0;
}