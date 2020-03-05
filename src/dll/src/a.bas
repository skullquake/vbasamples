'--------------------------------------------------------------------------------
'Test program for dll created
'--------------------------------------------------------------------------------
Module MainModule
Public Declare Function dub Lib "C:\opt\msys64\home\ockert\dev\g++\template\dllvba\lib\a.dll" (ByVal num As Long) As Long
Public Declare Function rnd Lib "C:\opt\msys64\home\ockert\dev\g++\template\dllvba\lib\a.dll" () As Long
Sub Main( )
	System.Console.WriteLine(dub(2))
	System.Console.WriteLine(rnd())
End Sub
End Module

