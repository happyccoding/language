import java.io.*;
import java.util.*;



class Solution {
  public static void main(String[] args) {
    System.out.println(permutation("abc", "acg"));
  }

  public static String Sort(String str){
    char[] arrStr = str.toCharArray();
    java.util.Arrays.sort(arrStr);
    return new String(arrStr);
  }
  
  public static Boolean permutation(String str1, String str2)
  {
    if (str1.length() != str2.length()) return false;
    
    if (Sort(str1).equals(Sort(str2))) return true;
    
    return false;
  }
}
