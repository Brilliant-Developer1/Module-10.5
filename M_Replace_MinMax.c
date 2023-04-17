#include <stdio.h>
#include <limits.h>
int main()
{
    int input;
    scanf("%d", &input);

    int arrey[input];
    for (int i = 0; i < input; i++)
    {
        scanf("%d", &arrey[i]);
    }

    int max = INT_MIN, min = INT_MAX;
    int max_index = 0, min_index = 0;
    for (int i = 0; i < input; i++)
    {
        if (max < arrey[i])
        {
            max = arrey[i];
            max_index = i;
        }
    }

    for (int i = 0; i < input; i++)
    {
        if (arrey[i] < min)
        {
            min = arrey[i];
            min_index = i;
        }
    }

    for (int i = 0; i < input; i++)
    {
        if (i == max_index)
        {
            arrey[i] = min;
        }
    }
    for (int i = 0; i < input; i++)
    {
        if (i == min_index)
        {
            arrey[i] = max;
        }
    }

    for (int i = 0; i < input; i++)
    {
        printf("%d ", arrey[i]);
    }

    return 0;
}