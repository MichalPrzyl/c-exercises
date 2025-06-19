#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>

char* my_strstr(const char *haystack, const char *needle){
  printf("%s\n", haystack);
  printf("%s\n", needle);
  
  char *reading_pointer = needle;
  // haystack = "Hello world";
  // needle = "world";
  int needle_length = strlen(needle);
  for (char *p = haystack; *p != '\0'; p++){
    if (*p == *needle){
      for (int i = 0; i < needle_length; i++){
	
      }
      
    }
  }
}


void tests(){
  char *str1 = "Hello world";
  //char s1[] = str1;
  char *n1 = "world";
  my_strstr(str1, n1);
    
  printf("ALL TESTS: SUCCESS!\n");
}

int main(){
  tests();
}
