/*
  ==============================================================================

    This file was auto-generated!

  ==============================================================================
*/

#include "MainComponent.h"

//==============================================================================
MainComponent::MainComponent()
{
    slider.setPopupDisplayEnabled(true, true, this);
    addAndMakeVisible(slider);
    setSize (600, 400);
}

MainComponent::~MainComponent()
{
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    g.fillAll (getLookAndFeel().findColour (ResizableWindow::backgroundColourId));
    g.setFont (Font (16.0f));
    g.setColour (Colours::white);
    g.drawText ("Drag and die!", getLocalBounds(), Justification::centred, true);
}

void MainComponent::resized()
{
    slider.setBounds(0, 0, 200, 50);
}
