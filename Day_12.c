#include <stdio.h>

void main()
{
    int m, n, i, j, a[100][100];
    scanf("%d %d", &m, &n);

    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    if(m != n)
    {
        printf("Not a Symmetric Matrix");
        return;
    }

    for(i = 0; i < m; i++)
    {
        for(j = i; j < n; j++)
        {
            if(a[i][j] != a[j][i])
            {
                printf("Not a Symmetric Matrix");
                return;
            }
        }
    }

    printf("Symmetric Matrix");
}
