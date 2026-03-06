#include <stdio.h>
#include <string.h>
#include "acutest.h"

int is_palindrome(const char *str);

/**
 * @brief Checks if a given string is a palindrome.
 * 
 * @param str The string to be checked.
 * @return int 1 if the string is a palindrome, 0 otherwise.
 */
int is_palindrome(const char *str) {
  int len = strlen(str);
  for (int i = 0; i < len / 2; i++) {
    if (str[i] != str[len - i - 1]) {
      return 0;
    }
  }
  return 1;
}

void test_program(void)
{
  TEST_CHECK(is_palindrome("racecar") == 1);
  TEST_MSG("Expected true, recieved false");
  
  TEST_CHECK(is_palindrome("madam") == 1);
  TEST_MSG("Expected true, recieved false");

  TEST_CHECK(is_palindrome("level") == 1);
  TEST_MSG("Expected true, recieved false");
  
  TEST_CHECK(is_palindrome("a") == 1);
  TEST_MSG("Expected true, recieved false");

  TEST_CHECK(is_palindrome("") == 1);
  TEST_MSG("Expected true, recieved false");

  TEST_CHECK(is_palindrome("hello") == 0);
  TEST_MSG("Expected false, recieved true");

  TEST_CHECK(is_palindrome("world") == 0);
  TEST_MSG("Expected false, recieved true");

  TEST_CHECK(is_palindrome("abba") == 1);
  TEST_MSG("Expected true, recieved false");

  TEST_CHECK(is_palindrome("raceCar") == 0);
  TEST_MSG("Expected false, recieved true");

  TEST_CHECK(is_palindrome("race car") == 0);
  TEST_MSG("Expected false, recieved true");
}

TEST_LIST = {
    {"test_palindrome", test_program},
    {NULL, NULL} /* End of list */
};