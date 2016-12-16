#include <stdio.h>
#include <string.h>

int isUniqueChars(char *str);

int main() {
  char strInput[] = "13db";
  int isUnique = isUniqueChars(strInput);
  
  printf("Result: %d\n", isUnique);
  
  return 0;
}

int isUniqueChars(char *str) {
  int i = 0;
  int lenStr = strlen(str);
  int strCheck[128];
  
  if (lenStr > 128) return 0;
  
  for (i=0; i<128; i++) {
    strCheck[i] = 0;
  }
  
  for (i=0; i<lenStr; i++) {
    int idx = (int)str[i];
    if (strCheck[idx]!= 0) {
      return 0;
    } else {
      strCheck[idx] = 1;
    }
  }  
  
  return 1;
}