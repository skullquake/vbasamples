
Sub Run_BAT()
	Set obj = CreateObject("Wscript.Shell")
	obj.Run Chr(34) & "X:\Test\" & "Termination Reports Scripts\" & "Execute_Terminations.bat" & Chr(34), 0, True
	Set obj=Nothing
End Sub

Sub WriteAndRunBatFile()
	Call Shell("X:\Test\Termination Reports Scripts\Execute_Terminations.bat")
End Sub

Sub Button1_Click()
	Call Shell("CMD.EXE /C " & "X:\Test\Termination_Reports_Scripts\Execute_Terminations.bat")
End Sub


Call Shell("cmd.exe /C /K " & "ChDir X:\Test\Termination_Reports_Scripts && Execute_Terminations.bat", vbNormalFocus)


Call Shell("cmd /c ""S:/somebatfile.bat""", vbNormalFocus)


