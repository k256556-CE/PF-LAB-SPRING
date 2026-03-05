#include <stdio.h>

int main()
{
    int spaces = 50;
    int car = 1;

    while(spaces > 0 && car != 0)
    {
        printf("Enter 1 for car or 0 to stop: ");
        scanf("%d", &car);

        if(car == 1)
        {
            spaces = spaces - 1;
            printf("Remaining spaces: %d\n", spaces);
        }
    }

    if(spaces == 0)
    {
        printf("Parking full");
    }

    return 0;
}
