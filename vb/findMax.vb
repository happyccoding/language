Module Solution
    Sub Main()
        Console.WriteLine ("Hello, World")
        Dim Arrays() As Integer = New Integer() {1, 4, 5, 6, 7}
        Dim maxValue As Integer = findMax(Arrays)
        Console.WriteLine(maxValue)
    End Sub
    
    Function findMax(ByVal Arrays() AS Integer) As Integer
        Dim maxValue As Integer = -1
        For Each Array As Integer In Arrays
            If Array > maxValue Then
                maxValue = Array
            End If
            'Console.WriteLine(Array)
        Next
        findMax = maxValue
    End Function
End Module
