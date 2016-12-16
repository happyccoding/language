import java.io.*;
import java.util.*;

/*
 * To execute Java, please define "static void main" on a class
 * named Solution.
 *
 * If you need more classes, simply define them inline.
 */

class Solution {
  public static void main(String[] args) {
    
    int array[] = {1, 4, 6, 7, 21, 3};
    int maxValue = -1;

    maxValue = findMax(array);
    System.out.println(maxValue);
/*    ArrayList<String> strings = new ArrayList<String>();
    strings.add("Hello, World!");
    strings.add("Welcome to CoderPad.");
    strings.add("This pad is running Java 8.");

    for (String string : strings) {
      System.out.println(string);
    }*/
  }
  
 public static int findMax(int arrays[]){
    int maxValue = -1;
    for (int array: arrays) {
      if (array > maxValue) {
        maxValue = array;        
      }
    }
    return maxValue;
  }
}
