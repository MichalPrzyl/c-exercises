#include <stdio.h>
#include <string.h>


int count_char(const char *str, char ch){
  int counter = 0;
  for (const char* p = str; *p != '\0'; p++) {
    if (*p == ch){
      counter++;
    }
  }

  return counter;
}

int main(){
  int counter = count_char("abecadlo", 'a');
  if (counter == 2) {
    printf("WELL DONE\n");
  }

  int counter_2 = count_char("hejka", 'a');
  if (counter_2 == 1) {
    printf("WELL DONE\n");
  }

  int counter_3 = count_char("hello world", 'l');
  if (counter_3 == 3) {
    printf("WELL DONE\n");
  }

}
