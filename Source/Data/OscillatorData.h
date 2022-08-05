/*
  ==============================================================================

    OscillatorData.h
    Created: 5 Aug 2022 9:18:20pm
    Author:  stzfao

  ==============================================================================
*/

#pragma once
#include <JuceHeader.h>

class OscillatorData : public juce::dsp::Oscillator<float>
{
public:
    void setWaveType(const int choice);

private:

};