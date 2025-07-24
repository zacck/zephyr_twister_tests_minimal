#include <zephyr/ztest.h>

ZTEST(hello_world_tests, test_hello_message) {
	zassert_true(1==2, "Math is broken"); 
}

ZTEST_SUITE(hello_world_tests, NULL, NULL, NULL, NULL, NULL);
