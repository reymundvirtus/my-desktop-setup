[PresetsTitleMeter]
Meter=String
Text=Theme
MeterStyle=StyleContent
FontSize=16
X=210
Y=370

[DarkPresetColorMeter]
Meter=String
MeterStyle=StyleTitles
Text=Dark
X=420
Y=370
FontSize=14
MouseOverAction=[!SetOption DarkPresetColorMeter FontColor [AccentColorMeasure]][!UpdateMeter DarkPresetColorMeter][!Redraw]
MouseLeaveAction=[!SetOption DarkPresetColorMeter FontColor #ContentColor#][!UpdateMeter DarkPresetColorMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables BackgroundColor 0,0,0 "#@#UserSettings.inc"][!WriteKeyValue Variables ContentColor 255,255,255 "#@#UserSettings.inc"][!WriteKeyValue Variables ImgTintColor 255,255,255 "#@#UserSettings.inc"][!WriteKeyValue Variables AccentGradient Light2 "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]
StringAlign=Center

[LightPresetColorMeter]
Meter=String
MeterStyle=StyleTitles
Text=Light
X=540
Y=370
FontSize=14
MouseOverAction=[!SetOption LightPresetColorMeter FontColor [AccentColorMeasure]][!UpdateMeter LightPresetColorMeter][!Redraw]
MouseLeaveAction=[!SetOption LightPresetColorMeter FontColor #ContentColor#][!UpdateMeter LightPresetColorMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables BackgroundColor 255,255,255 "#@#UserSettings.inc"][!WriteKeyValue Variables ContentColor 0,0,0 "#@#UserSettings.inc"][!WriteKeyValue Variables ImgTintColor 40,40,40 "#@#UserSettings.inc"][!WriteKeyValue Variables AccentGradient Light3 "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]
StringAlign=Center

[RoundedCornersPrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Corners
X=210
Y=330

[SquareCornerMeter]
Meter=String
X=420
Y=330
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Square
MouseOverAction=[!SetOption SquareCornerMeter FontColor [AccentColorMeasure]][!UpdateMeter SquareCornerMeter][!Redraw]
MouseLeaveAction=[!SetOption SquareCornerMeter FontColor #ContentColor#][!UpdateMeter SquareCornerMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables RoundedCorners 0 "#@#UserSettings.inc"][!Refresh lottaweather]

[RoundedCornerMeter]
Meter=String
X=540
Y=330
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Rounded
MouseOverAction=[!SetOption RoundedCornerMeter FontColor [AccentColorMeasure]][!UpdateMeter RoundedCornerMeter][!Redraw]
MouseLeaveAction=[!SetOption RoundedCornerMeter FontColor #ContentColor#][!UpdateMeter RoundedCornerMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables RoundedCorners 30 "#@#UserSettings.inc"][!Refresh lottaweather]

[TopSectionPrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Top Section
X=210
Y=290

[FullMeter]
Meter=String
X=420
Y=290
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Complete
MouseOverAction=[!SetOption FullMeter FontColor [AccentColorMeasure]][!UpdateMeter FullMeter][!Redraw]
MouseLeaveAction=[!SetOption FullMeter FontColor #ContentColor#][!UpdateMeter FullMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables CompactCurrentConditions 0 "#@#UserSettings.inc"][!Refresh lottaweather]

[CompactMeter]
Meter=String
X=540
Y=290
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Compact
MouseOverAction=[!SetOption CompactMeter FontColor [AccentColorMeasure]][!UpdateMeter CompactMeter][!Redraw]
MouseLeaveAction=[!SetOption CompactMeter FontColor #ContentColor#][!UpdateMeter CompactMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables CompactCurrentConditions 1 "#@#UserSettings.inc"][!Refresh lottaweather]

[ScalePrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Scale
X=210
Y=250

[ScalePercent]
Measure=Calc
Formula=#Scale#*100

[ScaleMeter]
Meter=String
X=420
Y=250
StringAlign=Center
MeterStyle=StyleTitles
FontSize=16
FontColor=[AccentColorMeasure]
MeasureName=ScalePercent
Text=%1%
DynamicVariables=1

[ScaleButton]
Meter=String
X=540
Y=250
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Change
MouseOverAction=[!SetOption ScaleButton FontColor [AccentColorMeasure]][!UpdateMeter ScaleButton][!Redraw]
MouseLeaveAction=[!SetOption ScaleButton FontColor #ContentColor#][!UpdateMeter ScaleButton][!Redraw]
LeftMouseUpAction=[!HideMeter ScaleMeter][!UpdateMeter ScaleMeter][!CommandMeasure InputScalePlugin "ExecuteBatch 1"]

[InputScalePlugin]
Measure=Plugin
Plugin=InputText
DefaultValue=100
X=380
Y=250
W=80
H=30
InputNumber=1
InputLimit=3
SolidColor=#BackgroundColor#
FontFace="Montserrat Semibold"
FontSize=18
FontColor=[AccentColorMeasure]
StringAlign=Center
Command1=[!WriteKeyValue Variables Scale ($UserInput$/100) "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]

[TransparencyPrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Transparency
X=210
Y=210

[TransparencyPercent]
Measure=Calc
Formula=#BackgroundOpacity#/2.55

[TransparencyMeter]
Meter=String
X=420
Y=210
StringAlign=Center
MeterStyle=StyleTitles
FontSize=18
FontColor=[AccentColorMeasure]
MeasureName=TransparencyPercent
Text=%1%
DynamicVariables=1

[TransparencyButton]
Meter=String
X=540
Y=210
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Change
MouseOverAction=[!SetOption TransparencyButton FontColor [AccentColorMeasure]][!UpdateMeter TransparencyButton][!Redraw]
MouseLeaveAction=[!SetOption TransparencyButton FontColor #ContentColor#][!UpdateMeter TransparencyButton][!Redraw]
LeftMouseUpAction=[!HideMeter TransparencyMeter][!UpdateMeter TransparencyMeter][!CommandMeasure InputTransparencyPlugin "ExecuteBatch 1"]

[InputTransparencyPlugin]
Measure=Plugin
Plugin=InputText
DefaultValue=75
X=380
Y=210
W=80
H=30
InputNumber=1
InputLimit=3
SolidColor=#BackgroundColor#
FontFace="Montserrat Semibold"
FontSize=18
FontColor=[AccentColorMeasure]
StringAlign=Center
Command1=[!WriteKeyValue Variables BackgroundOpacity ($UserInput$*2.55) "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]

[AccentPrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Accent Color
X=210
Y=170

[DynamicMeter]
Meter=String
X=420
Y=170
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Auto
MouseOverAction=[!SetOption DynamicMeter FontColor [AccentColorMeasure]][!UpdateMeter DynamicMeter][!Redraw]
MouseLeaveAction=[!SetOption DynamicMeter FontColor #ContentColor#][!UpdateMeter DynamicMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables AccentColor "Dynamic" "#@#UserSettings.inc"][!Refresh lottaweather]

[StaticMeter]
Meter=String
X=540
Y=170
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Custom
MouseOverAction=[!SetOption StaticMeter FontColor [AccentColorMeasure]][!UpdateMeter StaticMeter][!Redraw]
MouseLeaveAction=[!SetOption StaticMeter FontColor #ContentColor#][!UpdateMeter StaticMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables AccentColor "Static" "#@#UserSettings.inc"][!CommandMeasure InputAccentPlugin "ExecuteBatch 1"]

[InputAccentPlugin]
Measure=Plugin
Plugin=InputText
DefaultValue=240,140,30
X=360
Y=130
W=220
H=30
InputLimit=11
SolidColor=#BackgroundColor#
FontFace="Montserrat Semibold"
FontSize=18
FontColor=[AccentColorMeasure]
StringAlign=Right
Command1=[!WriteKeyValue Variables StaticAccentColor "$UserInput$" "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]

[PageTitle]
Meter=String
Text=Appearance
MeterStyle=StyleTitles
X=210
Y=15
FontSize=20
FontColor=[AccentColorMeasure]
DynamicVariables=1