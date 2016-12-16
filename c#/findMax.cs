using System;

// To execute C#, please define "static void Main" on a class
// named Solution.

class Solution
{
    static void Main(string[] args)
    {
        int[] arrays = {1,2,3,4,5};
       /* foreach(int array in arrays)
        {
            Console.WriteLine(array);
        }*/
        
        int maxValue = findMax(arrays);
        Console.WriteLine(maxValue);
/*        for (var i = 0; i < 5; i++)
        {
            Console.WriteLine("Hello, World");
        }*/
    }
    
    public static int findMax(int[] arrays)
    {
        int maxValue = -1;
        foreach(int array in arrays)
        {
            if (array > maxValue)
            {
                maxValue = array;
            }
        }
        return maxValue;
    }
    
}