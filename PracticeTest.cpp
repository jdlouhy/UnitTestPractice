/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, special_char_brackets)
{
    Practice obj;
    bool actual = obj.isPalindrome("{]");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, uppercase_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome("ABBA");
    ASSERT_TRUE(actual);
}
TEST(PracticeTest, mixed_case_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome("AbBa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, special_chars_pal)
{
    Practice obj;
    bool actual = obj.isPalindrome(".!@#$%^^%$#@!.");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_happy)
{
  Practice obj;
  int x, y, z;
  x = 3;
  y = 2;
  z = 1;
  obj.sortDescending(x,y,z);
  ASSERT_GE(x,y);
  ASSERT_GE(y,z);

}
