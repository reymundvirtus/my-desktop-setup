[UpdateEveryMeter]
Meter=String
Text=Update every
MeterStyle=StyleContent
FontSize=15
X=210
Y=370

[UpdateRateMeter]
Meter=String
X=350
Y=370
MeterStyle=StyleTitles
FontColor=[AccentColorMeasure]
FontSize=15
Text=#UpdateEvery# minute(s)
DynamicVariables=1

[UpdateButtonMeter]
Meter=String
MeterStyle=StyleTitles
Text=Change
X=540
Y=370
FontSize=14
MouseOverAction=[!SetOption UpdateButtonMeter FontColor [AccentColorMeasure]][!UpdateMeter UpdateButtonMeter][!Redraw]
MouseLeaveAction=[!SetOption UpdateButtonMeter FontColor #ContentColor#][!UpdateMeter UpdateButtonMeter][!Redraw]
LeftMouseUpAction=[!HideMeter UpdateRateMeter][!UpdateMeter UpdateRateMeter][!CommandMeasure UpdateRateInput "ExecuteBatch 1"]
StringAlign=Center

[UpdateRateInput]
Measure=Plugin
Plugin=InputText
DefaultValue=1
X=350
Y=370
W=140
H=30
InputLimit=3
InputNumber=1
SolidColor=#BackgroundColor#
FontFace="Montserrat Semibold"
FontSize=18
FontColor=[AccentColorMeasure]
StringAlign=Left
Command1=[!WriteKeyValue Variables UpdateEvery "$UserInput$" "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]

[UnitsPrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Units
X=210
Y=330

[MetricMeter]
Meter=String
X=420
Y=330
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Metric
MouseOverAction=[!SetOption MetricMeter FontColor [AccentColorMeasure]][!UpdateMeter MetricMeter][!Redraw]
MouseLeaveAction=[!SetOption MetricMeter FontColor #ContentColor#][!UpdateMeter MetricMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables Language en_GB "#@#UserSettings.inc"][!Refresh lottaweather]

[ImperialMeter]
Meter=String
X=540
Y=330
StringAlign=Center
MeterStyle=StyleTitles
FontSize=14
Text=Imperial
MouseOverAction=[!SetOption ImperialMeter FontColor [AccentColorMeasure]][!UpdateMeter ImperialMeter][!Redraw]
MouseLeaveAction=[!SetOption ImperialMeter FontColor #ContentColor#][!UpdateMeter ImperialMeter][!Redraw]
LeftMouseUpAction=[!WriteKeyValue Variables Language en_US "#@#UserSettings.inc"][!Refresh lottaweather]

[LocationPrompt]
Meter=String
MeterStyle=StyleContent
FontSize=16
Text=Location
X=210
Y=250

[WebParserLocation]
Measure=WebParser
URL=https://weather.com/weather/today/l/#Location#
RegExp=(?siU).*\\"getSunV3LocationPointUrlConfig\\".*\\"displayName\\":\\"(.*)\\".*
UpdateDivider=-1
StringIndex=1

[CurrentLocationMeter]
Meter=String
X=420
Y=250
W=150
Clipstring=1
MeasureName=WebParserLocation
MeterStyle=StyleTitles
FontSize=14
FontColor=[AccentColorMeasure]
StringAlign=Center
DynamicVariables=1

[LocationButtonMeter]
Meter=String
MeterStyle=StyleTitles
Text=Change
X=540
Y=250
FontSize=14
MouseOverAction=[!SetOption LocationButtonMeter FontColor [AccentColorMeasure]][!UpdateMeter LocationButtonMeter][!Redraw]
MouseLeaveAction=[!SetOption LocationButtonMeter FontColor #ContentColor#][!UpdateMeter LocationButtonMeter][!Redraw]
LeftMouseUpAction=[!HideMeter CurrentLocationMeter][!UpdateMeter CurrentLocationMeter][!CommandMeasure LocationRateInput "ExecuteBatch 1"]
StringAlign=Center

[LocationRateInput]
Measure=Plugin
Plugin=InputText
DefaultValue=FRXX0076
X=350
Y=250
W=140
H=30
InputLimit=8
SolidColor=#BackgroundColor#
FontFace="Montserrat Semibold"
FontSize=14
FontColor=[AccentColorMeasure]
StringAlign=Center
Command1=[!WriteKeyValue Variables Location "$UserInput$" "#@#UserSettings.inc"][!Refresh lottaweather][!Refresh]

[CodePrompt]
Meter=String
MeterStyle=StyleContent
FontFace=Montserrat Semibold
FontSize=13
Text=Click here to find a code for your location.
X=210
Y=290
SolidColor=0,0,0,1
LeftMouseUpAction=["https://weather.codes"]
MouseOverAction=[!SetOption CodePrompt FontColor [AccentColorMeasure]][!UpdateMeter CodePrompt][!Redraw]
MouseLeaveAction=[!SetOption CodePrompt FontColor #ContentColor#][!UpdateMeter CodePrompt][!Redraw]

[PageTitle]
Meter=String
Text=Settings
MeterStyle=StyleTitles
X=210
Y=15
FontSize=20
FontColor=[AccentColorMeasure]
DynamicVariables=1