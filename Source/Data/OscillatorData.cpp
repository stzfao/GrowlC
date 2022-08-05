/*
  ==============================================================================

    OscillatorData.cpp
    Created: 5 Aug 2022 9:18:20pm
    Author:  stzfao

  ==============================================================================
*/

#include "OscillatorData.h"

void OscillatorData::setWaveType(const int choice)
{
	switch (choice)
	{
		case 0:	//sawtooth wave
			initialise ( [](float inp) {
				return juce::jmap(
					inp,
					float(-juce::MathConstants<double>::pi),
					float(juce::MathConstants<double>::pi),
					float(-1),
					float(1));
				});
			break;

		case 1:	//triangle wave
			initialise([](float inp) {
				return juce::jmap(
					inp,
					float(-juce::MathConstants<double>::pi),
					float(juce::MathConstants<double>::pi),
					float(-1),
					float(1));
				});
			break;

		default:
			jassertfalse;	//Not supposed to be here, since choice has to land between either triangle or sawtooth wave
			break;
	}
}