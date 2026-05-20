#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/* Fundamental functions */
size_t string_length(const char *string);
void string_free(char *string);
char *string_duplicate(const char *string);
int string_equals(const char *string1, const char *string2);
int string_compare(const char *a, const char *b);

/* Validation helpers */
int string_index_valid(const char *string, int index);
int string_range_valid(const char *string, int start, int end);
int string_is_numeric(const char *string);
int string_is_alpha(const char *string);
int string_is_alnum(const char *string);
int string_is_empty(const char *string);

/* Search and lookup */
int string_find(const char *string, const char *pattern);
int string_find_char(const char *string, char c);
int string_contains(const char *string, const char *pattern);
int string_count(const char *string, const char *pattern);
int string_count_char(const char *string, char c);
int string_starts_with(const char *string, const char *prefix);
int string_ends_with(const char *string, const char *suffix);

/* Substring and slicing */
char *string_substring(const char *string, int start, int length);
char *string_substring_range(int start, int end, const char *string);

/* Case conversion and transforms */
char *string_to_lower(const char *string);
char *string_to_upper(const char *string);
char *string_reverse(const char *string);
char *string_sort(const char *string);

/* Trimming and whitespace */
char *string_ltrim(const char *string);
char *string_rtrim(const char *string);
char *string_trim(const char *string);

/* Construction */
char *string_append(const char *string, const char *append);
char *string_insert(const char *string, const char *added_string, int index);
char *string_replace(int start, int end, const char *string, const char *new_text);
char *string_repeat(const char *string, int times);
char *string_pad_left(const char *string, int width, char pad);
char *string_pad_right(const char *string, int width, char pad);

/* Removal operations */
char *string_pop_back(const char *string);
char *string_pop_front(const char *string);
char *string_remove_char(const char *string, char c);
char *string_remove_range(const char *string, int start, int end);
char *string_remove_first(const char *string, const char *pattern);
char *string_remove_all(const char *string, const char *pattern);

/* Replacement and joining */
char *string_replace_first(const char *string, const char *old, const char *new_text);
char *string_replace_all(const char *string, const char *old, const char *new_text);
char *string_join(char **strings, int count, const char *separator);

/* Tokenization */
char **string_split(const char *string, char delim, int *count);

/* Acessor functions*/
char string_char_at(const char *string, int index); // returns the character at index . returns '\0' if index invalid

#endif
