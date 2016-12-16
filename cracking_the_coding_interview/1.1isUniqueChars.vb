Module Solution
    Sub Main()
        Console.WriteLine (isUniqueChars("aabc"))
    End Sub

    Function isUniqueChars(str As String) as Boolean
        Dim strCheck(256) As Boolean = new Boolean(){}

        For Each ch As Char In str
            If strCheck(Asc(ch))=True Then
                isUniqueChars = False
                Exit Function
            Else
                strCheck(Asc(ch)) = True
            End If
        Next
        
        isUniqueChars = True
    End Function

End Module