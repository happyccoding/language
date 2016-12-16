#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int cmpfunc(const void *a, const void *b) {
  return *(char*)a - *(char*)b;
}

void sort(char str[]) {
  qsort(str, (size_t)strlen(str), (size_t) sizeof(char), cmpfunc);
}

int permutation(char *first, char* second) {
  if (strlen(first) != strlen(second)) return 0;
  sort(first);
  sort(second);

  if (strcmp(first, second) == 0) return 1;

  return 0;
  
}

int main() {
  char first[] = "abc";
  char second[] = "bca";

  int res = permutation(first, second);
  if (res) puts("true");
  else puts("false");
}