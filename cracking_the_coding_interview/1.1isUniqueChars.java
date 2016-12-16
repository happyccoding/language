import java.io.*;
import java.util.*;

class Solution {
  public static void main(String[] args) {
    String strTest = "aabcd";
    
    System.out.println(isUniqueChars(strTest));
  }
  
  public static boolean isUniqueChars(String str) {
    if (str.length() > 128) return false;
    boolean strCheck[] = new boolean[128];
    for (int i=0; i<str.length(); i++) {
      int val = str.charAt(i);
      if (strCheck[val]) {
        return false;
      } else {
        strCheck[val] = true;
      }
    }
    
    return true;
    
  }
}