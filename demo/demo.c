#include <stdio.h>
#include <stdlib.h>
#include "string_utils.h"

int main(void)
{
       printf("==== BASIC STRING OPS ====\n");

       char *s1 = string_append("Hello", " World");
       printf("append: %s\n", s1);

       char *s2 = string_duplicate(s1);
       printf("duplicate: %s\n", s2);

       printf("equals(\"Hello World\"): %d\n",
              string_equals(s1, "Hello World"));

       printf("\n==== SEARCH & COUNT ====\n");

       printf("find \"World\": %d\n",
              string_find(s1, "World"));

       printf("count \"l\": %d\n",
              string_count_char(s1, 'l'));

       printf("contains \"lo Wo\": %d\n",
              string_contains(s1, "lo Wo"));

       printf("\n==== SUBSTRINGS ====\n");

       char *sub1 = string_substring(s1, 0, 5);
       printf("substring(0,5): %s\n", sub1);

       char *sub2 = string_substring_range(6, 10, s1);
       printf("substring_range(6,10): %s\n", sub2);

       printf("\n==== CASE & TRANSFORMS ====\n");

       char *upper = string_to_upper("HeLLo123");
       char *lower = string_to_lower("HeLLo123");
       char *rev = string_reverse("abcdef");

       printf("upper: %s\n", upper);
       printf("lower: %s\n", lower);
       printf("reverse: %s\n", rev);

       printf("\n==== TRIM & PADDING ====\n");

       char *trimmed = string_trim("   hello world   ");
       printf("trim: '%s'\n", trimmed);

       char *pad_l = string_pad_left("42", 5, '0');
       char *pad_r = string_pad_right("42", 5, '.');

       printf("pad_left: %s\n", pad_l);
       printf("pad_right: %s\n", pad_r);

       printf("\n==== REPLACE & REMOVE ====\n");

       char *rep1 = string_replace_first("one two two", "two", "X");
       printf("replace_first: %s\n", rep1);

       char *rep2 = string_replace_all("a-b-a-b", "a", "X");
       printf("replace_all: %s\n", rep2);

       char *rm1 = string_remove_char("banana", 'a');
       printf("remove_char: %s\n", rm1);

       char *rm2 = string_remove_range("abcdef", 2, 4);
       printf("remove_range(2,4): %s\n", rm2);

       printf("\n==== SPLIT & JOIN ====\n");

       int count = 0;
       char **tokens = string_split("one,two,three", ',', &count);

       for (int i = 0; i < count; i++)
              printf("token[%d]: %s\n", i, tokens[i]);

       char *joined = string_join(tokens, count, " | ");
       printf("joined: %s\n", joined);

       printf("\n==== REPEAT & POP ====\n");

       char *rep = string_repeat("ha", 3);
       printf("repeat: %s\n", rep);

       char *popf = string_pop_front("hello");
       char *popb = string_pop_back("hello");

       printf("pop_front: %s\n", popf);
       printf("pop_back: %s\n", popb);

       printf("\n==== VALIDATION ====\n");

       printf("is_numeric(\"123\"): %d\n", string_is_numeric("123"));
       printf("is_alpha(\"abc\"): %d\n", string_is_alpha("abc"));
       printf("is_alnum(\"a1b2\"): %d\n", string_is_alnum("a1b2"));
       printf("is_empty(\"\"): %d\n", string_is_empty(""));

       printf("\n==== ACCESSOR OPS ====\n");

       printf("char_at(1): %c\n",
              string_char_at("Hello", 1));

       printf("char_at(99): %d\n",
              string_char_at("Hello", 99));

       string_free(s1);
       string_free(s2);
       string_free(sub1);
       string_free(sub2);
       string_free(upper);
       string_free(lower);
       string_free(rev);
       string_free(trimmed);
       string_free(pad_l);
       string_free(pad_r);
       string_free(rep1);
       string_free(rep2);
       string_free(rm1);
       string_free(rm2);
       string_free(joined);
       string_free(rep);
       string_free(popf);
       string_free(popb);

       for (int i = 0; i < count; i++)
              string_free(tokens[i]);
       free(tokens);

       return 0;
}

// compile via gcc
// make sure to be in the right dir
// command:-
// gcc -Iinclude demo/demo.c src/string_utils.c -o <exe name>
