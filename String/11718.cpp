#include <stdio.h>

int main(int argc, char *argv[])
{
    char a;

    while (scanf("%c", &a) != EOF)
    {
        printf("%c", a);
    }

    return 0;
}