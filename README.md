![4112 Logo](/Resources/4112Logo.jpg)
# FRC Team 4112 C++ TBA Scouting Application
This project is designed to provide FRC teams with a simple solution to gather scouting data via the [The Blue Alliance API V3](https://www.thebluealliance.com/apidocs/v3). 

## Getting Started
The first step in this project is to copy all of the files from [./src/](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/src) and `#include` the headers relevant to your needs. Secondly the libcURL and cURLpp [libraries(.dylib)](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/Libraries) need to be linked to the project.
#### Getting an access token
Also an access token is needed to use the TBA read API and detailed instructions for getting one are located [here](https://www.thebluealliance.com/apidocs#apiv3). When using the key in your project it should be written to a string variable as `?X-TBA-Auth-Key=YourKeyHere` so that it can be passed to the necessary functions.

### Prerequisites
This project relies entirely on [libcURL](https://curl.haxx.se/libcurl/) and [cURLpp](http://www.curlpp.org) to use these they **must** your project must be linked to these libraries. I've provided the .dylib files that need to be linked [here](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/Libraries) to alleviate the need of having to download the files yourself. Yes, you can gather the find the files yourself by installing libcURL and cURLpp for testing purposes, but that is beyond the scope of this project. 
Instruction to link the libraries to your project are provided for eclipse, g++, and visual studio code [here](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting/wiki/Setup). For anyone using other methods you will need to search for the linking instructions for your platform if you do not already know how. Also this project runs off of the current c++14 standard and may not work using earlier versions of c++.

### Documentation
A wiki has been create for this project and contains in depth information on its use and specifically its functions. The wiki is located [here](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting/wiki).

### Installing
Although not necessary to use this project you can install lbcURL and cURLpp if you want

Install libcURL and cURLpp on mac use homebrew with the commands `brew install curl` and `brew install curlpp` respectively.
***
For other operating systems download libcURL from [here](https://curl.haxx.se/download.html) and cURLpp from [here](https://github.com/jpbarrette/curlpp/releases)

## Examples
There are example for each of the functions in the source code of this project. All examples are located at [./examples/](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/Examples) and have their own readme that explains what each example does and the necessary header files to `#include`.

## Notes on Future FRC Seasons
The intent of this project is to be applicable to each FRC season with more than just general FRC data but data based off of the current years game. Due to the nature of FRC this project can not be updated with game specific functions until the release of the game. For instance in 2017's game steamworks it was possibly to collect data on which touch pads had been pressed, but these game specific function can only be written after the release of the game. It is the intent of this project to implement game specific functions as soon as The Blue Alliance releases their API models or assuming they do not pre release their API models, when calls can be made to their API after week one of competition. These are currently the limitations of this project due to the game reveal format of FRC and the reliance on The Blue Alliance API but this project will be updated with game specific functions as soon as possible.

## Built With
* [libcURL](https://curl.haxx.se) - Basis for sending HTTPS requests
* [cURLpp](http://www.curlpp.org) - C++ wrapper for libcURL

## Authors
* **Jaden McElvey** - *All* - [github](https://github.com/JadenMcElvey)

## Acknowledgments
* [jpbarrette](https://github.com/jpbarrette) - creator of cURLpp
* [Daniel Stenberg](https://daniel.haxx.se) - head of the curl project