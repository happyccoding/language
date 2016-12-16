#include <stdio.h>

// To execute C, please define "int main()"
int findMax(int array[], int n);

int main() {
  int maxValue = -1;
  int sampleArray[] = {1, 3, 11, 5, 7};
  

  for (int i = 0; i < 5; i++) {
    printf("%d\n", sampleArray[i]);
  }

  
  maxValue = findMax(sampleArray, 5);
  
  if (maxValue >= 0) {
    printf("MaxValue = %d\n", maxValue);
  } else {
    puts("Cannot find the max value!!");
  }
  

  return 0;
}

int findMax(int array[], int n)
{
  int i;
  int maxValue = -1;

  for (i = 0; i < n; i++)
  {
    if (array[i] > maxValue)
    {
      maxValue = array[i];
    }
  }
  return maxValue;
}
