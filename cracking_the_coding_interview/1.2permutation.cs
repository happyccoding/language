using System;

// To execute C#, please define "static void Main" on a class
// named Solution.

class Solution
{
    static void Main(string[] args)
    {
        /*for (var i = 0; i < 5; i++)
        {
            Console.WriteLine("Hello, World");
        }*/
        
        Console.WriteLine(permutation("abc", "bac"));
        
        
    }
    
    static bool permutation(string str1, string str2)
    {
        char[] arrStr1 = str1.ToCharArray();
        char[] arrStr2 = str2.ToCharArray();
        
        Array.Sort(arrStr1);
        Array.Sort(arrStr2);
        
        string newStr1 = new string(arrStr1);
        string newStr2 = new string(arrStr2);
        
        if (newStr1.Equals(newStr2)) return true;
        
        return false;
    }
}