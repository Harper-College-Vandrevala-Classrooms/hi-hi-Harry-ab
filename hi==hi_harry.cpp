#include <stdio.h>
#include <ctype.h> // For tolower function

int strcmp_case_insensitive(const char *s1, const char *s2) {
    while (*s1 && *s2) {
        if (tolower((unsigned char)*s1) != tolower((unsigned char)*s2)) {
            return (unsigned char)tolower(*s1) - (unsigned char)tolower(*s2);
        }
        s1++;
        s2++;
    }
    return (unsigned char)*s1 - (unsigned char)*s2;
}

int main() {
    const char *test_strings[][2] = {
        {"carlos", "micheal"},
        {"dog", "puppy"},
        {"pencil", "pen"},
        {"VALUE ONE", "VALUE ONE"},
        {"StrIng TwO", "string two"},
        {"abc", "ABC"},
        {"abc", "abcd"},
      
  
    };

    // Loop through the test cases and call strcmp_case_insensitive
    for (int i = 0; i < 7; i++) {
        const char *s1 = test_strings[i][0];
        const char *s2 = test_strings[i][1];
        int result = strcmp_case_insensitive(s1, s2);
        
        printf("Comparison of \"%s\" and \"%s\" returns %d.\n", s1, s2, result);
    }

    return 0;
}