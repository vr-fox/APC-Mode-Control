/*
  ==============================================================================

  This is an automatically generated GUI class created by the Introjucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Introjucer version: 3.2.0

  ------------------------------------------------------------------------------

  The Introjucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

#ifndef __JUCE_HEADER_1B7D314A9B5D26__
#define __JUCE_HEADER_1B7D314A9B5D26__

//[Headers]     -- You can add your own extra header files here --
#include "JuceHeader.h"
//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Introjucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class Gui  : public Component,
             public ButtonListener,
             public ComboBoxListener
{
public:
    //==============================================================================
    Gui ();
    ~Gui();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.
    //[/UserMethods]

    void paint (Graphics& g);
    void resized();
    void buttonClicked (Button* buttonThatWasClicked);
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged);

    // Binary resources:
    static const char* gtk_refresh_png;
    static const int gtk_refresh_pngSize;


private:
    //[UserVariables]   -- You can add your own custom variables in this section.
    ScopedPointer<MidiOutput> salida;
    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TextButton> textButton;
    ScopedPointer<ComboBox> midiDev;
    ScopedPointer<TextEditor> textEditor;
    ScopedPointer<TextButton> textButton2;
    ScopedPointer<TextButton> textButton3;
    ScopedPointer<ComboBox> comboBox;
    ScopedPointer<ComboBox> comboBox2;
    ScopedPointer<ComboBox> comboBox3;
    ScopedPointer<ComboBox> comboBox4;
    ScopedPointer<ComboBox> comboBox5;
    ScopedPointer<ComboBox> comboBox6;
    ScopedPointer<ComboBox> comboBox7;
    ScopedPointer<ComboBox> comboBox8;
    ScopedPointer<ComboBox> comboBox9;
    ScopedPointer<ComboBox> comboBox10;
    ScopedPointer<ComboBox> comboBox11;
    ScopedPointer<ComboBox> comboBox12;
    ScopedPointer<ComboBox> comboBox13;
    ScopedPointer<ComboBox> comboBox14;
    ScopedPointer<ComboBox> comboBox15;
    ScopedPointer<ComboBox> comboBox16;
    ScopedPointer<ImageButton> imageButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (Gui)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

#endif   // __JUCE_HEADER_1B7D314A9B5D26__
