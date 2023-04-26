#include <stdio.h>
#include <string.h>
int main()
{
    char a[101], b[101];
    scanf("%s %s", a, b);
    int a_len = strlen(a);
    int b_len = strlen(b);
    printf("%d %d\n", a_len, b_len);

    strcat(a, b);
    printf("%s\n", a);

    char temp;
    temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    char str1[101];
    strncpy(str1, a, a_len);
    str1[a_len] = '\0';

    printf("%s ", str1);
    printf("%s", b);
    return 0;
}
/*
input is:
abcde
efg
Expected Output is:
5 3
abcdeefg
ebcde afg
what is the problem in this code please find and solve
"#include <stdio.h>
#include <string.h>
int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);
    int a_len = strlen(a);
    int b_len = strlen(b);
    printf("%d %d\n", a_len, b_len);

    strcat(a, b);
    printf("%s", a);

    printf("\n");
    int temp[11];
    temp[0] = a[0];
    a[0] = b[0];
    b[0] = temp[0];

    char str1[11];
    strncpy(str1, a, a_len);
    str1[a_len] = '\0';

    printf("%s ", str1);
    printf("%s", b);
    return 0;
}"


*/