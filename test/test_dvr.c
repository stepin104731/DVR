#include "unity.h"
#include "factorial.h"
/* Required by the unity test framework */
void setUp(){}
/* Required by the unity test framework */
void tearDown(){}

void test1(void)
{
  TEST_ASSERT_EQUAL(0, checkv(230));
}
void test2(void)
{
  TEST_ASSERT_EQUAL(1, checkv(250));
}
void test3(void)
{
  TEST_ASSERT_EQUAL(-1, checkv(220));

}


int test_main(void)
{
/* Initiate the Unity Test Framework */
  UNITY_BEGIN();

/* Run Test functions */
  RUN_TEST(test1);
  RUN_TEST(test2);
  RUN_TEST(test3);


  /* Close the Unity Test Framework */
  return UNITY_END();
}
