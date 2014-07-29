# ecohacker build

A collection of software used for [EcoHacker-build project](http://www.eco-hacker.info/project-blog/) in Delancey, NY, July 2014.  

Executables can be found in the "bin" folder of each application. Built for OSX. Source code in "src".

All of the programs are built using [OpenFrameworks](http://openframeworks.cc) and have various dependencies. If you haven't used OF before and wish to build these from source, you will need to add the additional libraries found in the project settings. Most can be found on [ofxaddons](ofxaddons.com). Let me know if you need help.

Including....

## timelapse

application for automatically triggering photos for a connected Canon DSLR camera. Requires EDSDK from Canon. Instructions to get EDSDK running in OF can be [found here](https://github.com/kylemcdonald/ofxEdsdk).

## build_walls

projection mapping the four walls of the hut, using four projectors connected to a single computer using a [Matrox TripleHead2Go](http://www.matrox.com/graphics/en/products/gxm/th2go/displayport/) device. Contains visuals and projects by all the participating artists at the build.

## build_roof 

projection mapping the roof of the structure with a single projector. just contains jon's glyphs for now.

## build_esdsk

this is a version of build_walls which contains the EDSDK software to get a live camera feed of the inside of the hut. we never got around to trying this and i think it doesn't work properly right now. Next year! <3