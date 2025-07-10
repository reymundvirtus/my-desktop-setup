[ContactMeTitle]
Meter=String
Text=Contact Me
MeterStyle=StyleTitles
X=210
Y=270
FontSize=20
FontColor=[AccentColorMeasure]
DynamicVariables=1

[ContactMeContent]
Meter=String
MeterStyle=StyleContent
X=210
Y=310
Clipstring=2
W=322
Text=If you have any question or request, you can try and reach me out on DeviantArt but I'm not always active there. You'll have better luck on Twitter (@imaquietkid) or Reddit (u/louisly). 

[TwitterButton]
Meter=Shape
Shape=Rectangle 550,300,50,50 | Fill Color #BackgroundColor#,#BackgroundOpacity# | StrokeWidth 0
MouseOverAction=[!SetOption TwitterIcon ImageTint [AccentColorMeasure]][!UpdateMeter TwitterIcon][!Redraw]
MouseLeaveAction=[!SetOption TwitterIcon ImageTint #ContentColor#][!UpdateMeter TwitterIcon][!Redraw]
LeftMouseUpAction=["https://twitter.com/imaquietkid"]

[RedditButton]
Meter=Shape
Shape=Rectangle 550,360,50,50 | Fill Color #BackgroundColor#,#BackgroundOpacity# | StrokeWidth 0
MouseOverAction=[!SetOption RedditIcon ImageTint [AccentColorMeasure]][!UpdateMeter RedditIcon][!Redraw]
MouseLeaveAction=[!SetOption RedditIcon ImageTint #ContentColor#][!UpdateMeter RedditIcon][!Redraw]
LeftMouseUpAction=["https://www.reddit.com/user/louisly"]

[TwitterIcon]
Meter=Image
ImageName=#@#UI/Twitter.png
X=560
Y=310
W=30
ImageTint=#ContentColor#
DynamicVariables=1

[RedditIcon]
Meter=Image
ImageName=#@#UI/Reddit.png
X=560
Y=370
W=30
ImageTint=#ContentColor#
DynamicVariables=1

[CreditsTitle]
Meter=String
Text=lottaweather
MeterStyle=StyleTitles
X=210
Y=80
FontSize=20
FontColor=[AccentColorMeasure]
DynamicVariables=1

[CreditsContent]
Meter=String
MeterStyle=StyleContent
X=210
Y=120
Clipstring=2
W=322
Text=Author : imaquietkid #CRLF#Version : 1.5.2#CRLF##CRLF#Chameleon Plugin by Socks the Fox#CRLF##CRLF#Massive thanks to Basketballforce/Screwyoudeviantart12 who helped with the scaling option !