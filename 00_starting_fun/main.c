#include <stdio.h>
#include <string.h>

char* get_reversed_string(char *text){
  int length = strlen(text);

  char *returning_text = malloc(length + 1);

  char *dst = returning_text;

  for (char* p = text + length - 1; p >= text; p--){
    *dst = *p;
    *dst++;
  }

  *dst = '\0';

  return returning_text;
}

int print_reversed_string(char *text){
  int length = strlen(text);
  printf("Reversed string: ");
  for (char *p = text + length; p >= text; p--){
    printf("%c", *p);
  }
  return 1;
}

int main(){
  char *some_text = "Michał Przyłucki";

  printf("hello world\n");
  printf("Normal: %s\n", some_text);


  /* int length = strlen(some_text); */
  int length = strlen(some_text);
  printf("length: %i\n", length);
  /* print_reversed_string(some_text); */
  printf("\nGetting reversed...\n");
  char *x = get_reversed_string(some_text);
  printf("%s", x);

  /* printf("Reversed: "); */
  /* for (char *p = some_text+length - sizeof(char); p >= some_text; p--){ */
  /*   printf("%c", *p); */
  /* } */

  /* printf("Reversed: "); */
  /* for (char *p = some_text + length - 1; p >= some_text; p--) { */
  /*   printf("%c", *p); */
  /* } */

  printf("\n");
  /* while (*p != '\0'){ */
  /*   printf("%c\n", *p); */
  /*   p++; */
  /* } */

  /* for (char *p = some_text; *p != '\0'; p++){ */
  /*   printf("%c", *p); */
  /* } */

  /* for (char *x = some_text; x != '\0'; x++){ */
  /*   printf("x: %s\n", x); */
  /* } */

  /* printf("Reverse: %s\n", reversed_text); */
}
