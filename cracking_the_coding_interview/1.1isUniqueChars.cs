using System;

class Solution
{
    static void Main(string[] args)
    {       
        Console.WriteLine(isUniqueChars("abc"));
    }
    
    static bool isUniqueChars(string str) {
        if (str.Length > 256) return false;
        bool[] check = new bool[256];
        foreach (char ch in str)
        {
            int idx = (int)ch;
            if (check[idx]) return false;
            else check[idx] = true;
        }
        return true;
    }
}