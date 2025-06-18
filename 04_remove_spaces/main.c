#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>


void remove_spaces(char *str){
  char *src = str, *dst = src;
  for(char *c = str; *c != '\0'; c++){
    if (*c != ' '){
      *dst++ = *src;
      //printf("THIS IS SPACJA!\n");
    }
    src++;
  }
  *dst = '\0';
}

void tests(){
  char str_1[] = "Hello world!";
  char *s1 = str_1;
  remove_spaces(s1);
  assert(strcmp(s1, "Helloworld!") == 0);
  
  char str_2[] = "Membrana soldierego";
  char *s2 = str_2;
  remove_spaces(s2);
  assert(strcmp(s2, "Membranasoldierego") == 0);

  char str_3[] = " a b c ";
  char *s3 = str_3;
  remove_spaces(s3);
  assert(strcmp(s3, "abc") == 0);

  char str_4[] = "   ";
  char *s4 = str_4;
  remove_spaces(s4);
  assert(strcmp(s4, "") == 0);

  char str_5[] = "";
  char *s5 = str_5;
  remove_spaces(s5);
  assert(strcmp(s5, "") == 0);

  char str_6[] = "no_spaces";
  char *s6 = str_6;
  remove_spaces(s6);
  assert(strcmp(s6, "no_spaces") == 0);

  char str_7[] = "space at start";
  char *s7 = str_7;
  remove_spaces(s7);
  assert(strcmp(s7, "spaceatstart") == 0);

  char str_8[] = "space at end ";
  char *s8 = str_8;
  remove_spaces(s8);
  assert(strcmp(s8, "spaceatend") == 0);

  char str_9[] = "multiple   spaces";
  char *s9 = str_9;
  remove_spaces(s9);
  assert(strcmp(s9, "multiplespaces") == 0);

  char str_10[] = " A B C ";
  char *s10 = str_10;
  remove_spaces(s10);
  assert(strcmp(s10, "ABC") == 0);

  
  printf("ALL TESTS: SUCCESS!\n");
}

int main(){
  tests();
}
