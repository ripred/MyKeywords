# MyKeywords Arduino Library

[![Arduino CI](https://img.shields.io/static/v1?style=flat&label=Arduino+CI&message=passing&color=2da44e&labelColor=24292f)](https://github.com/ripred/MyKeywords/actions/workflows/arduino_test_runner.yml)
[![Arduino-lint](https://img.shields.io/static/v1?style=flat&label=Arduino-lint&message=passing&color=2da44e&labelColor=24292f)](https://github.com/ripred/MyKeywords/actions/workflows/arduino-lint.yml)
[![JSON check](https://img.shields.io/static/v1?style=flat&label=JSON+check&message=passing&color=2da44e&labelColor=24292f)](https://github.com/ripred/MyKeywords/actions/workflows/jsoncheck.yml)
[![Arduino Library Manager](https://img.shields.io/static/v1?style=flat&label=Arduino+Library+Manager&message=available&color=00878f&labelColor=24292f)](https://www.ardu-badge.com/MyKeywords)
[![Release](https://img.shields.io/static/v1?style=flat&label=Release&message=v1.0.0&color=8250df&labelColor=24292f)](https://github.com/ripred/MyKeywords/releases/latest)
[![License](https://img.shields.io/static/v1?style=flat&label=License&message=MIT&color=0969da&labelColor=24292f)](https://github.com/ripred/MyKeywords/blob/main/LICENSE)
[![Stars](https://img.shields.io/static/v1?style=flat&label=Stars&message=2&color=bf8700&labelColor=24292f)](https://github.com/ripred/MyKeywords/stargazers)
[![Forks](https://img.shields.io/static/v1?style=flat&label=Forks&message=0&color=6f42c1&labelColor=24292f)](https://github.com/ripred/MyKeywords/network/members)

Add your own color highlighted keywords to the Arduino IDE!

This is a simple do-nothing library that allows you to define your own color highlighted keywords without cluttering up any other libraries.
By changing or adding your own definitions to the keywords.txt file you can add your own defined color-highlighted keywords to your Arduio IDE sketches.

To change or add your own keyword(s) edit the:
   Arduino/libraries/MyKeywords/keywords.txt
file with a text editor that does not convert tabs to spaces.

NOTE!
To define your own keywords you MUST use a TAB character between the
keyword and the keyword type (KEYWORD1, KEYWORD2, or LITERAL1)
NOT SPACES!

To see the highlighting take effect you may need to exit the IDE and re-open it.
```
########################################################
# Syntax Coloring Map for Local Arduino Sketches
########################################################
# Datatypes (KEYWORD1)
########################################################
Fred	KEYWORD1
Wilma	KEYWORD1
Barney	KEYWORD1

########################################################
# Methods, Functions, and Globals (KEYWORD2)
########################################################
pebbles	KEYWORD2
bambam	KEYWORD2

########################################################
# Constants (LITERAL1)
########################################################
Betty	LITERAL1
Dino	LITERAL1
```
![](MyKeywords.png)
