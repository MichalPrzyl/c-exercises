#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


char *get_reversed_text(const char *str){
  int length = strlen(str);
  char *reversed_text = malloc(length + 1);

  char *dst = reversed_text;
                      
  for (const char *p = str + length - 1; p >= str; p--){
    *dst = *p;
    *dst++;
  }
  *dst = '\0';

  return reversed_text;
}

int is_palindrome(const char *str){
  char *reversed_text = get_reversed_text(str);
  int str_length = strlen(str);
  int reversed_text_length = strlen(reversed_text);

  if (str_length != reversed_text_length){
    return 0;
  }

  if (strcmp(str, reversed_text) == 0){ return 1;}
  else { return 0; }
}

void tests(){
  assert(strcmp(get_reversed_text("abc"), "cba") == 0);
  assert(strcmp(get_reversed_text("hello"), "olleh") == 0);
  assert(strcmp(get_reversed_text("abc def"), "fed cba") == 0);

  assert(strcmp(get_reversed_text("a"), "a") == 0);
  assert(strcmp(get_reversed_text("ab"), "ba") == 0);
  assert(strcmp(get_reversed_text("12345"), "54321") == 0);
  assert(strcmp(get_reversed_text("racecar"), "racecar") == 0);
  assert(strcmp(get_reversed_text("A man"), "nam A") == 0);
  assert(strcmp(get_reversed_text(" "), " ") == 0);
  assert(strcmp(get_reversed_text(""), "") == 0);
  assert(strcmp(get_reversed_text("hello world"), "dlrow olleh") == 0);
  assert(strcmp(get_reversed_text("C programming"), "gnimmargorp C") == 0);
  assert(strcmp(get_reversed_text("!@#"), "#@!") == 0);

  assert(is_palindrome("abc") == 0);
  assert(is_palindrome("kajak") == 1);
  assert(is_palindrome("kajak") == 1);

  assert(is_palindrome("") == 1);
  assert(is_palindrome("a") == 1);
  assert(is_palindrome("aa") == 1);
  assert(is_palindrome("aba") == 1);
  assert(is_palindrome("abcba") == 1);
  assert(is_palindrome("abccba") == 1);
  assert(is_palindrome("abc") == 0);
  assert(is_palindrome("abcd") == 0);
  assert(is_palindrome("abca") == 0);
  assert(is_palindrome("12321") == 1);

  printf("All tests: success\n");
}

int main(){
  tests();
}
