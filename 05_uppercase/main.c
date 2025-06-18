#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <stdlib.h>
#include <ctype.h>

void to_uppercase(char *str) {
    for (char *p = str; *p != '\0'; p++) {
      *p = toupper(*p);
    }
}

void tests() {
    char str1[] = "abecadlo";
    char *s1 = str1;
    to_uppercase(s1);
    assert(strcmp(s1, "ABECADLO") == 0);

    char str2[] = "Hello World!";
    char *s2 = str2;
    to_uppercase(s2);
    assert(strcmp(s2, "HELLO WORLD!") == 0);

    char str3[] = "123 abc XYZ";
    char *s3 = str3;
    to_uppercase(s3);
    assert(strcmp(s3, "123 ABC XYZ") == 0);

    char str4[] = "";
    char *s4 = str4;
    to_uppercase(s4);
    assert(strcmp(s4, "") == 0);

    char str5[] = "nospaces";
    char *s5 = str5;
    to_uppercase(s5);
    assert(strcmp(s5, "NOSPACES") == 0);

    char str6[] = "   leading and trailing   ";
    char *s6 = str6;
    to_uppercase(s6);
    assert(strcmp(s6, "   LEADING AND TRAILING   ") == 0);

    char str7[] = "ZzYyXxWw";
    char *s7 = str7;
    to_uppercase(s7);
    assert(strcmp(s7, "ZZYYXXWW") == 0);

    char str8[] = "c programming";
    char *s8 = str8;
    to_uppercase(s8);
    assert(strcmp(s8, "C PROGRAMMING") == 0);

    char str9[] = "ąęśćżź";  // polskie znaki – nie będą zamienione poprawnie przez toupper()
    char *s9 = str9;
    to_uppercase(s9);
    assert(strcmp(s9, "ĄĘŚĆŻŹ") != 0);  // ten test pokazuje, że UTF-8 nie działa z toupper()

    char str10[] = "!@#%^&*()";
    char *s10 = str10;
    to_uppercase(s10);
    assert(strcmp(s10, "!@#%^&*()") == 0);

    printf("ALL TESTS: SUCCESS!\n");
}

int main(){
  tests();
}
