#include <stdio.h>

int main()
{
    int n;
    int i;
    int total = 0;

    printf("Enter days: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        total = total + i;
    }

    printf("Total distance: %d km", total);

    return 0;
}
