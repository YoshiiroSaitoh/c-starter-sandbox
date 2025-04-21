#include "encrypt.h"
#include <stdio.h>

// A,Z,a,z
char get_encrypted_char(char target, char key)
{
    char result = target + key;
    while (result > 'z') {
        int distance = result - 'z';
        result = 'a' + distance - 1;
    }
    return result;
}

char get_char(char *message)
{
    char result;
    while (1)
    {
        printf("%s", message);
        if (scanf(" %c", &result) != 1) {
            printf("\n入力フォーマットが不正です");
            // バッファをクリア
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF);
        } else {
            break;
        }
    }
    return result;
}
