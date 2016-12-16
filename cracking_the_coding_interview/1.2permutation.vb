Module Solution
    Sub Main()
        Console.WriteLine (Permutaion("abc", "cba"))
    End Sub
    
    Function Permutaion(Str1 As String, Str2 As String) As Boolean
        Dim char1Array() As Char = Str1.ToCharArray   
        Dim char2Array() As Char = Str2.ToCharArray 
        Array.Sort(char1Array)
        Array.Sort(char2Array)
        
        If (New String(char1Array)).Equals(New String(char2Array))
            Permutaion = True
        Else
            Permutaion = False
        End If
    End Function
End Module