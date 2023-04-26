#include <stdio.h>
#include <string.h>
int main()
{
    char input[1001];
    scanf("%s", input);
    int result = 0;
    int i, length;
    length = strlen(input);
    for (int i = 0; i < length; i++)
    {
        if (input[i] != input[length - i - 1])
        {
            result = 1;
            break;
        }
    }

    if (result)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }

    return 0;
}