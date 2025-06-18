#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

char* concat(char *first, char *second){
  int len1 = strlen(first);
  int len2 = strlen(second);
  char *returning_string = malloc(sizeof(char) * (len1 + len2));
  
  int counter = 0;
  
  for (char *p = first; *p != '\0'; p++){
    returning_string[counter] = *p;
    counter++;
  }

  for (char *p = second; *p != '\0'; p++){
    returning_string[counter] = *p;
    counter++;
  }
  
  return returning_string;
}

void tests(){
  char f1[] = "abc";
  char s1[] = "def";
  assert(strcmp(concat(f1, s1), "abcdef") == 0);

  char f2[] = "";
  char s2[] = "xyz";
  assert(strcmp(concat(f2, s2), "xyz") == 0);

  char f3[] = "123";
  char s3[] = "";
  assert(strcmp(concat(f3, s3), "123") == 0);

  char f4[] = "";
  char s4[] = "";
  assert(strcmp(concat(f4, s4), "") == 0);

  char f5[] = "a";
  char s5[] = "b";
  assert(strcmp(concat(f5, s5), "ab") == 0);

  char f6[] = "hello";
  char s6[] = " world";
  assert(strcmp(concat(f6, s6), "hello world") == 0);

  char f7[] = "foo";
  char s7[] = "bar";
  assert(strcmp(concat(f7, s7), "foobar") == 0);

  char f8[] = "concatenate ";
  char s8[] = "me";
  assert(strcmp(concat(f8, s8), "concatenate me") == 0);

  char f9[] = "C";
  char s9[] = " language";
  assert(strcmp(concat(f9, s9), "C language") == 0);

  char f10[] = "123";
  char s10[] = "456";
  assert(strcmp(concat(f10, s10), "123456") == 0);

  char f11[] = "test";
  char s11[] = "ing";
  assert(strcmp(concat(f11, s11), "testing") == 0);

  char f12[] = "pre";
  char s12[] = "fix";
  assert(strcmp(concat(f12, s12), "prefix") == 0);

  char f13[] = "a";
  char s13[] = "";
  assert(strcmp(concat(f13, s13), "a") == 0);

  char f14[] = "";
  char s14[] = "b";
  assert(strcmp(concat(f14, s14), "b") == 0);

  char f15[] = " ";
  char s15[] = "space";
  assert(strcmp(concat(f15, s15), " space") == 0);

  char f16[] = "edge";
  char s16[] = "case";
  assert(strcmp(concat(f16, s16), "edgecase") == 0);

  char f17[] = "UPPER";
  char s17[] = "lower";
  assert(strcmp(concat(f17, s17), "UPPERlower") == 0);

  char f18[] = "1234567890";
  char s18[] = "abcdefg";
  assert(strcmp(concat(f18, s18), "1234567890abcdefg") == 0);

  char f19[] = "A";
  char s19[] = " very long string here";
  assert(strcmp(concat(f19, s19), "A very long string here") == 0);

  char f20[] = "😊";
  char s20[] = " emoji test";
  assert(strcmp(concat(f20, s20), "😊 emoji test") == 0);

  char f21[] = "abc";
  char s21[] = "abc";
  assert(strcmp(concat(f21, s21), "abcabc") == 0);

  char f22[] = "repeat";
  char s22[] = "repeat";
  assert(strcmp(concat(f22, s22), "repeatrepeat") == 0);

  char f23[] = "aaa";
  char s23[] = "bbb";
  assert(strcmp(concat(f23, s23), "aaabbb") == 0);

  char f24[] = "!";
  char s24[] = "!";
  assert(strcmp(concat(f24, s24), "!!") == 0);

  char f25[] = "x";
  char s25[] = "y";
  assert(strcmp(concat(f25, s25), "xy") == 0);

  char f26[] = "start";
  char s26[] = "_end";
  assert(strcmp(concat(f26, s26), "start_end") == 0);

  char f27[] = " ";
  char s27[] = " ";
  assert(strcmp(concat(f27, s27), "  ") == 0);

  char f28[] = "abc";
  char s28[] = "123";
  assert(strcmp(concat(f28, s28), "abc123") == 0);

  char f29[] = "0";
  char s29[] = "1";
  assert(strcmp(concat(f29, s29), "01") == 0);

  char f30[] = "multi";
  char s30[] = "line";
  assert(strcmp(concat(f30, s30), "multiline") == 0);
  
  printf("ALL TESTS: SUCCESS!\n");
}

int main(){
  tests();
}
