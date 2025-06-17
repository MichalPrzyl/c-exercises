#include <stdio.h>
#include <string.h>


int get_length(char *text){
  int counter = 0;
  for (char* p = text; *p != '\0'; p++){
    counter++;
  }
  return counter;
}

int main(){
  char *sample_1_text = "Witam serdecznie";
  int my_length = get_length(sample_1_text);
  printf("calculated length: %d\n", my_length);
}
