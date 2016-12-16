#include <iostream>
using namespace std;

int findMax(int arrays[], int n);
// To execute C++, please define "int main()"
int main() {
  int arrays[] = {1, 3, 5, 11, 4, 3};
  
  int maxValue = findMax(arrays, 6);
  if (maxValue >= 0)
  {
    cout << maxValue;
  }
  
/*  auto words = { "Hello, ", "World!", "\n" };
  for (const string& word : words) {
    cout << word;
  }*/
  return 0;
}

int findMax(int arrays[], int n)
{
  int maxValue = -1;
  for (int i=0 ; i < n; i++) 
  {
    if (arrays[i] > maxValue)
    {
      maxValue = arrays[i];
    }
  }
  return maxValue;
}