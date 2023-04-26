#include <stdio.h>

int main()
{
    char c[100001];
    fgets(c, 100001, stdin);
    for (int i = 0; c[i] != '\0'; i++)
    {
        if (c[i] == ',')
        {
            c[i] = ' ';
        }
        else if (c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] = c[i] - 32;
        }
        else if (c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] = c[i] + 32;
        }
    }
    printf("%s", c);
    return 0;
}
/*
else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] = s[i] + 32;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            s[i] = s[i] - 32;
        }
*/

/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char s;
    char array[100001];
    int i = 0;
    // scanf("%s", s);
    // fgets(s, 1000001, stdin);
    while (scanf("%c", &s) != EOF)
    {
        // printf("%c", s);
        array[i] = s;
        i++;
    }

    // for (int i = 0; i < strlen(array); i++)
    // {
    //     printf("%c", array[i]);
    // }

    for (int i = 0; i < strlen(array); i++)
    {

        if (array[i] == ',')
        {
            array[i] = ' ';
        }
        else if (isupper(array[i]))
        {
            array[i] = array[i] + 32;
        }
        else if (islower(array[i]))
        {
            array[i] = array[i] - 32;
        }
    }

    for (int i = 0; i < strlen(array); i++)
    {
        printf("%c", array[i]);
    }

    return 0;
}
*/