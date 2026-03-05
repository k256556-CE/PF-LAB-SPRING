#include <stdio.h>

int main()
{
    int i;
    int status;
    int total = 0;

    for(i = 1; i <= 25; i++)
    {
        printf("Enter check in for member %d: ", i);
        scanf("%d", &status);

        if(status == 1)
        {
            total = total + 1;
        }
    }

    printf("Total checked in: %d", total);

    return 0;
}
