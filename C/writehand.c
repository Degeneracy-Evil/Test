#include <stdio.h>
#include <windows.h>

int main(int argc, char *argv[])
{
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (argv[1][i] == ' ')
        {
            printf("%c", argv[1][i]);
            Sleep(500);
        }
        else
        {

            printf("%c", argv[1][i]);
            Sleep(150);
        }
    }

    return 0;
}