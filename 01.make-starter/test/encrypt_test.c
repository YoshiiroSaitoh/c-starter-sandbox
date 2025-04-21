#include <CUnit/CUnit.h>
#include <CUnit/Basic.h>
#include "encrypt.h"

void test_get_encrypted_char() {
    CU_ASSERT(get_encrypted_char('a', 5) == 'f');
    CU_ASSERT(get_encrypted_char('y', 3) == 'b');
    CU_ASSERT(get_encrypted_char('b', 1) == 'c');
}

int main() {
    CU_initialize_registry();
    CU_pSuite suite = CU_add_suite("EncryptTest", 0, 0);
    CU_add_test(suite, "test_get_encrypted_char", test_get_encrypted_char);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return 0;
}
