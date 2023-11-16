# GrowlC
## A Growl VST Plugin.

#### *_※This ReadME document is under work._* 

[![My Skills](https://skillicons.dev/icons?i=figma,vscode,cpp,git)](https://github.com/stzfao/GrowlC)

[![Build Status](https://travis-ci.org/joemccann/dillinger.svg?branch=master)](https://travis-ci.org/joemccann/dillinger)

GrowlC is a VST plugin to add a "growl" effect to your vocals in post production. 

- It allows varied growl effects on your vocals, using a frequency and a strength slider.
- You can use the effect once to add the same growl at multiple points in your vocals using automation tracks.
- Additional functionality for distortion in the vocals for additional grit. 

## Background

- Frequency modulating a triangular/sawtooth wave with a vocal sample creates a growl effect that distorts the sample. 
- Adding this functionality with a modulator choice allows for the user to modify vocals in post-processing. 
- Additionally, an equaliser allows the user to cut off higher frequencies to remove "chirp" sounds

The plugin revolves around the usage of the [JUCE Framework](https://juce.com/) that people widely use in music engineering.

> It is an open source C++ codebase 
> that can be used to create standalone software 
> on Windows, macOS, Linux, iOS and Android, 
> as well as VST, VST3, AU, AUv3, AAX and LV2 plug-ins.

This text you see here is *actually- written in Markdown! To get a feel
for Markdown's syntax, type some text into the left window and
watch the results in the right.

## Tech

A number of optimisations have been made to keep the plugin light-weight and snappy:

- Lookup tables used for sawtooth wave formation
- Equaliser snaps to integral values for fixed frequencies


## Installation

The installer/VST plugin build has yet to be released.

## License

MIT

**Free Software, Hell Yeah!**
