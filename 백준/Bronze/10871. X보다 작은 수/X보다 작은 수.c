#include <stdio.h>
int main()
{
    int n, x;
    scanf("%d %d", &n, &x);

    for (int i = 0; i < n; i++)
    {
        int a; // num
        scanf("%d", &a);

        if (a < x)
        {
            printf("%d ", a);
        }
    }
}