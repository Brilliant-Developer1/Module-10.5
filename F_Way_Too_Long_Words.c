#include <stdio.h>
#include <string.h>

int main()
{
    int input;
    scanf("%d", &input);
    for (int i = 0; i < input; i++)
    {
        char a[101];
        scanf("%s", a);
        if (strlen(a) > 10)
        {

            printf("%c%lu%c\n", a[0], strlen(a) - 2, a[strlen(a) - 1]);
        }
        else
        {
            printf("%s\n", a);
        }
    }

    return 0;
}

/*
int n;
    scanf("%d", &n);




while (input--)
    {
        char array[101];
        scanf("%s", array);
        int len = strlen(array);
        if (len > 10)
        {
            printf("%c%d%c\n", array[0], len - 2, array[len - 1]);
        }
        else
        {
            printf("%s\n", array);
        }
    }
*/
