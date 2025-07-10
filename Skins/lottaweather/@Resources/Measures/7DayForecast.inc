[7DayForecastParent]
Measure=WebParser
Group=Parents
URL=[SubParentForecast]
StringIndex=1
Disabled=1
RegExp=(?siU)\\"dayOfWeek\\":\[\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\".*\\"moonPhase\\":\[\\"(.*)\\",.*\\"moonPhaseDay\\":\[(.*),.*\\"cloudCover\\":\[(.*),(.*),.*\\"iconCode\\":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*\\"precipChance\\":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*\\"temperature\\":\[(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*),(.*)\].*\\"wxPhraseLong\\":\[(.*),(.*),\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\",\\"(.*)\\"\].*

[TodayWeekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=1
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day2Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=2
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day3Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=3
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day4Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=4
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day5Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=5
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day6Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=6
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day7Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=7
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[Day8Weekday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=8
Substitute="Monday":"M","Tuesday":"Tu","Wednesday":"W","Thursday":"Th","Friday":"F","Saturday":"Sa","Sunday":"Su"
UpdateDivider=-1
Group=Children

[CurrentMoonPhase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=9
UpdateDivider=-1
Group=Children

[CurrentMoonIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=10
UpdateDivider=-1
Group=Children

[CloudCoverToday]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=11
UpdateDivider=-1
Group=Children

[CloudCoverTonight]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=12
UpdateDivider=-1
Group=Children

[Day1DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=13
UpdateDivider=-1
Group=Children

[Day1NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=14
UpdateDivider=-1
Group=Children

[Day2DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=15
UpdateDivider=-1
Group=Children

[Day2NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=16
UpdateDivider=-1
Group=Children

[Day3DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=17
UpdateDivider=-1
Group=Children

[Day3NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=18
UpdateDivider=-1
Group=Children

[Day4DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=19
UpdateDivider=-1
Group=Children

[Day4NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=20
UpdateDivider=-1
Group=Children

[Day5DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=21
UpdateDivider=-1
Group=Children

[Day5NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=22
UpdateDivider=-1
Group=Children

[Day6DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=23
UpdateDivider=-1
Group=Children

[Day6NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=24
UpdateDivider=-1
Group=Children

[Day7DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=25
UpdateDivider=-1
Group=Children

[Day7NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=26
UpdateDivider=-1
Group=Children

[Day8DayIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=27
UpdateDivider=-1
Group=Children

[Day8NightIcon]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=28
UpdateDivider=-1
Group=Children

[Day2DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=31
IfCondition = (Day2DayPrecipChance > 30) && (Day2DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day2PrecipChance ImageName "#@#UI/Moderate Chance.png"][!SetOption MiniDay2PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day2DayPrecipChance > 60) && (Day2DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day2PrecipChance ImageName "#@#UI/High Chance.png"][!SetOption MiniDay2PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day2DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day2PrecipChance ImageName "#@#UI/Very High Chance.png"][!SetOption MiniDay2PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day2NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=32
IfCondition = (Day2NightPrecipChance > 30) && (Day2NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night2PrecipChance ImageName "#@#UI/Moderate Chance.png"][!SetOption MiniNight2PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day2NightPrecipChance > 60) && (Day2NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night2PrecipChance ImageName "#@#UI/High Chance.png"][!SetOption MiniNight2PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day2NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night2PrecipChance ImageName "#@#UI/Very High Chance.png"][!SetOption MiniNight2PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day3DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=33
IfCondition = (Day3DayPrecipChance > 30) && (Day3DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day3PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day3DayPrecipChance > 60) && (Day3DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day3PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day3DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day3PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day3NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=34
IfCondition = (Day3NightPrecipChance > 30) && (Day3NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night3PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day3NightPrecipChance > 60) && (Day3NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night3PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day3NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night3PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day4DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=35
IfCondition = (Day4DayPrecipChance > 30) && (Day4DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day4PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day4DayPrecipChance > 60) && (Day4DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day4PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day4DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day4PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day4NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=36
IfCondition = (Day4NightPrecipChance > 30) && (Day4NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night4PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day4NightPrecipChance > 60) && (Day4NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night4PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day4NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night4PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day5DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=37
IfCondition = (Day5DayPrecipChance > 30) && (Day5DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day5PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day5DayPrecipChance > 60) && (Day5DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day5PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day5DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day5PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day5NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=38
IfCondition = (Day5NightPrecipChance > 30) && (Day5NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night5PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day5NightPrecipChance > 60) && (Day5NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night5PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day5NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night5PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day6DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=39
IfCondition = (Day6DayPrecipChance > 30) && (Day6DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day6PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day6DayPrecipChance > 60) && (Day6DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day6PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day6DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day6PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day6NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=40
IfCondition = (Day6NightPrecipChance > 30) && (Day6NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night6PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day6NightPrecipChance > 60) && (Day6NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night6PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day6NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night6PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day7DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=41
IfCondition = (Day7DayPrecipChance > 30) && (Day7DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day7PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day7DayPrecipChance > 60) && (Day7DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day7PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day7DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day7PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day7NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=42
IfCondition = (Day7NightPrecipChance > 30) && (Day7NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night7PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day7NightPrecipChance > 60) && (Day7NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night7PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day7NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night7PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day8DayPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=43
IfCondition = (Day8DayPrecipChance > 30) && (Day8DayPrecipChance <= 60)
IfTrueAction = [!SetOption Day8PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day8DayPrecipChance > 60) && (Day8DayPrecipChance <= 80)
IfTrueAction2 = [!SetOption Day8PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day8DayPrecipChance > 80)
IfTrueAction3 = [!SetOption Day8PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day8NightPrecipChance]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=44
IfCondition = (Day8NightPrecipChance > 30) && (Day8NightPrecipChance <= 60)
IfTrueAction = [!SetOption Night8PrecipChance ImageName "#@#UI/Moderate Chance.png"]
IfCondition2 = (Day8NightPrecipChance > 60) && (Day8NightPrecipChance <= 80)
IfTrueAction2 = [!SetOption Night8PrecipChance ImageName "#@#UI/High Chance.png"]
IfCondition3 = (Day8NightPrecipChance > 80)
IfTrueAction3 = [!SetOption Night8PrecipChance ImageName "#@#UI/Very High Chance.png"]
UpdateDivider=-1
Group=Children

[Day1DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=45
UpdateDivider=-1
Group=Children

[Day1NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=46
RegExpSubstitute=1
UpdateDivider=-1
Group=Children

[Day2DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=47
UpdateDivider=-1
Group=Children

[Day2NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=48
UpdateDivider=-1
Group=Children

[Day3DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=49
UpdateDivider=-1
Group=Children

[Day3NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=50
UpdateDivider=-1
Group=Children

[Day4DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=51
UpdateDivider=-1
Group=Children

[Day4NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=52
UpdateDivider=-1
Group=Children

[Day5DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=53
UpdateDivider=-1
Group=Children

[Day5NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=54
UpdateDivider=-1
Group=Children

[Day6DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=55
UpdateDivider=-1
Group=Children

[Day6NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=56
UpdateDivider=-1
Group=Children

[Day7DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=57
UpdateDivider=-1
Group=Children

[Day7NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=58
UpdateDivider=-1
Group=Children

[Day8DayTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=59
UpdateDivider=-1
Group=Children

[Day8NightTemp]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=60
UpdateDivider=-1
Group=Children

[Day1DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=61
Substitute='"':""
UpdateDivider=-1
Group=Children

[Day1NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=62
Substitute='"':""
UpdateDivider=-1
Group=Children

[Day2DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=63
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day2NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=64
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day3DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=65
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day3NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=66
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day4DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=67
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day4NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=68
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day5DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=69
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day5NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=70
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day6DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=71
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day6NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=72
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day7DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=73
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day7NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=74
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day8DayPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=75
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children

[Day8NightPhrase]
Measure=WebParser
URL=[7DayForecastParent]
StringIndex=76
Substitute=#ReverseUnicode#
UpdateDivider=-1
Group=Children