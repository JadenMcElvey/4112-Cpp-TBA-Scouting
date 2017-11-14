# 4112 C++ TBA Scouting Application
This project is designed to provide FRC teams with a simple solution to gather scouting data via the [The Blue Alliance API V3](https://www.thebluealliance.com/apidocs/v3). 

## Getting Started
The first step in this project is to copy all of the files from [./src](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/src) and `#include` the headers relevant to your needs. Secondly the libcURL and cURLpp [libraries(.dylib)](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/Libraries) need to be linked to the project.

### Prerequisites
This project relies entirely on [libcURL](https://curl.haxx.se/libcurl/) and [cURLpp](http://www.curlpp.org) to use these they **must** your project must be linked to these libraries. I've provided the .dylib files that need to be linked [here](https://github.com/JadenMcElvey/4112-Cpp-TBA-Scouting-Application/tree/master/Libraries) to alleviate the need of having to download the files yourself. Yes, you can gather the find the files yourself by installing libcURL and cURLpp for testing purposes, but that is beyond the scope of this project. 
Instruction to link the libraries to your project are provided for eclipse, g++, and visual studio code. For anyone using other methods you will need to search for the linking instructions for your platform if you do not already know how. Also this project runs off of the current c++14 standard and may not work using earlier versions of c++.

#### Eclipse (neon and oxygen)
Go to project properties by right clicking your project and selecting properties  
navigate to Properties>C/C++ Build>Settings>GCC C++ Compiler and add `-std=c++14` to commands with a single space before it  
navigate to Properties>C/C++ Build>Settings>Libraries add `path/to/libraries` in Library search path (-L)  
navigate to Properties>C/C++ Build>Settings>Libraries add `curl` libraries (-l)  
navigate to Properties>C/C++ Build>Settings>Libraries add `curlpp` libraries (-l)  

#### g++ (only tested with version 4.2.1)
Use the following flags/commands when you tell g++ to compile.(preferably in order)  
`-std=c++14` to compile using c++14  
`-L/path/to/libraries` to tell g++ where the .dylib library files are saved  
`-lcurl` to tell g++ to use the libcURL .dylib  
`-lcurlpp` to tell g++ to use the cURLpp .dylib

#### Visual Studio Code with g++
Using [Visual Studio Tasks](https://code.visualstudio.com/docs/languages/cpp#_navigating-code)
* Go [here](https://code.visualstudio.com/docs/languages/cpp#_navigating-code) and scroll down to "Building your code"
* Follow the first 4 bullet points
* add `"-std=c++14"`, `"-L/path/to/libraries"`, `"-lcurl"`, and `"-lcurlpp"` to the args sections seperated by commas in order

Using [Code Runner](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)
* If you do not already have the Code Runner extension download it and reload your window
* go to settings
* overwrite your default setting with the line `"cpp": "cd $dir && g++ -std=c++14 *.cpp -L/path/to/libraries -lcurl -lcurlpp -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
    },`

### Installing
Although not necessary to use this project you can install lbcURL and cURLpp if you want

Install libcURL and cURLpp on mac use homebrew with the commands `brew install curl` and `brew install curlpp` respectively.
***
For other operating systems download libcURL from [here](https://curl.haxx.se/download.html) and cURLpp from [here](https://github.com/jpbarrette/curlpp/releases)

## Examples
Examples coming soon

## Built With
* [libcURL](https://curl.haxx.se) - Basis for sending HTTPS requests
* [cURLpp](http://www.curlpp.org) - C++ wrapper for libcURL

## Authors
* **Jaden McElvey** - *Initial work* - [github](https://github.com/JadenMcElvey)

## Acknowledgments
* [jpbarrette](https://github.com/jpbarrette) - creator of cURLpp
* [Daniel Stenberg](https://daniel.haxx.se) - head of the curl project