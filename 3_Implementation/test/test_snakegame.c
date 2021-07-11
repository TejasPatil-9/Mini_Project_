#include "unity.h"
#include "../inc/fun.h"
void setUp()
{
}
void tearDown()
{
}

void test_input(void)
{  
    TEST_PASS();
}
void test_logic(void)
{
    TEST_PASS();
}
void test_setup(void)
{
    TEST_PASS();
}
void test_draw(void)
{
    TEST_PASS();
}
int main(void)
{
  UNITY_BEGIN();
  RUN_TEST(test_input);
  RUN_TEST(test_logic);
  RUN_TEST(test_setup);
  RUN_TEST(test_draw);
  return UNITY_END();
}
