#include <iostream>
#include <string>
using namespace std;

string sort(string str) {
  for (unsigned int i=0; i < str.length(); i++)
  {
    for (unsigned int j=i; j < str.length(); j++)
    {
      if (str[i] > str[j])
      {
        swap(str[i], str[j]);
      }
    }
    
    //cout << str[i] << " " ;
  }
  return str;
}

bool permutation(string first, string second)
{
  first = sort(first);
  second = sort(second);
  
  if (!first.compare(second)) return true;
  return false;
}

// To execute C++, please define "int main()"
int main() {
  char first[] = "dog";
  char second[] = "godd";

  if (permutation(first, second))
  {
    cout << "true";
  } 
  else 
  {
    cout << "fasle";
  }
  return 0;
}
