#include <iostream>
#include <string>
using namespace std;

bool isUniqueChars(string str);

int main() {
  string strInput = "abcd3";
  bool result  = isUniqueChars(strInput);
  cout << result;
  return 0;
}

bool isUniqueChars(string str) {
  bool strCheck[128] = {};
  fill_n(strCheck, 128, false);

  if (str.length() > 128) return false;
  for (unsigned int i=0; i<str.length(); i++) {
    int val = str[i];
    if (strCheck[val]) {
      return false;
    } else {
      strCheck[val] = true;
    }
  }
  
  return true;
    
}