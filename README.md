# JT3DS
A simple app for testing.
# Installing the app
just drag the CIA into your 3DS sd card and install it with FBI.
or emulate with citra
# Building the app yourself
This covers everything you need for building Josiauh Test for 3DS.
## Getting tools for autocia (if you want a CIA)
Grab MakeROM 0.18.3 from [here](https://github.com/3DSGuy/Project_CTR/releases) and scrolling or just typing  MakeROM v0.18.3 in the find menu your browser has.
Then we also need [bannertool (click me)](https://github.com/Steveice10/bannertool/releases/tag/1.2.0).
## DevKitPro
Depending on your working environment, get devKitPro from [the wiki page](https://devkitpro.org/wiki/Getting_Started) that has the installers.
## Finally, build!
WINDOWS USERS: Launch the MSYS shell created by devKitPro and navigate to this directory.
Run `make`.
You're done!
## Or are you? (Building the CIA)
The CIA is built with the autocia.bat tool. (sorry UNIX users... but i created this on windows who cares (and i can't find bannertool for unix))
Just run that.