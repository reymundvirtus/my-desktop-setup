[Variables]
Sec.SaveLocation=#SKINSPATH##Skin.Name#\@Resources\Vars.inc
; ------------------------------ User variables ------------------------------ ;
UserNameCheckVariable=reymu
AlreadyHasImageMagick=0
; ---------------------------------- Remote ---------------------------------- ;
Set.Lang=English
Set.UseBetaInstaller=0
Set.UseExtInstaller=0
; -------------------------- Window and performance -------------------------- ;
Set.W=731
Set.H=738
Set.Maximized=0
Set.PerformanceMode=0
Set.LegacyWindowResizing=0
; ----------------------------- Scaling variables ---------------------------- ;
Set.Home.P=(100*[Set.S])
Set.L=(200*([Set.S]+0.2))
Set.P=(#Set.P.Handle#*[Set.S])
Set.P.Handle=40
Set.R=10
Set.WinR=2
Set.WinB=2
; --------------------------- Appearance variables --------------------------- ;
Set.Style=CoreUIv2
Set.IconStyle=Normal
Set.Alpha=255
Set.Pri_Color=18,18,18
Set.Sec_Color=28,28,28
Set.Ter_Color=35,35,35
Set.Accent_Color=242, 52, 0
Set.Accent_Color_2=255, 183, 0
Set.Text_Color=242,240,255
Set.SubText_Color=120,120,120
Set.Positive_Color=35,209,96
Set.Font=Poppins
Set.Blur=None
Set.BlurCorner=Round

[Set.S]
Measure=Calc
Formula=0.7

[Set.WindowSave]
Measure=Calc
X=194
Y=77
W=1373
H=905
S=1
Set.Minimized=false
