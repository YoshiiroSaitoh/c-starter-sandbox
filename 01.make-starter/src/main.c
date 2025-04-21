#include <stdio.h>
#include "encrypt.h"

int main() {
    char plain = get_char("暗号化したい文字: ");
    char key = get_char("ずらす文字数 (1文字): ");
    char result = get_encrypted_char(plain, key);
    printf("暗号化結果: %c\n", result);
    return 0;
}
