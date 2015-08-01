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

//[Headers] You can add your own extra header files here...
//[/Headers]

#include "Gui.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
Gui::Gui ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (textButton = new TextButton ("usermode"));
    textButton->setButtonText (TRANS("Ableton Mode"));
    textButton->addListener (this);

    addAndMakeVisible (midiDev = new ComboBox ("new combo box"));
    midiDev->setEditableText (false);
    midiDev->setJustificationType (Justification::centredLeft);
    midiDev->setTextWhenNothingSelected (String::empty);
    midiDev->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    midiDev->addListener (this);

    addAndMakeVisible (textEditor = new TextEditor ("new text editor"));
    textEditor->setMultiLine (true);
    textEditor->setReturnKeyStartsNewLine (true);
    textEditor->setReadOnly (false);
    textEditor->setScrollbarsShown (true);
    textEditor->setCaretVisible (true);
    textEditor->setPopupMenuEnabled (true);
    textEditor->setText (String::empty);

    addAndMakeVisible (textButton2 = new TextButton ("new button"));
    textButton2->setButtonText (TRANS("Generic Mode"));
    textButton2->addListener (this);

    addAndMakeVisible (textButton3 = new TextButton ("new button"));
    textButton3->setButtonText (TRANS("Ableton Alternative"));
    textButton3->addListener (this);

    addAndMakeVisible (comboBox = new ComboBox ("new combo box"));
    comboBox->setEditableText (false);
    comboBox->setJustificationType (Justification::centredLeft);
    comboBox->setTextWhenNothingSelected (String::empty);
    comboBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox->addItem (TRANS("Off"), 1);
    comboBox->addItem (TRANS("Single"), 2);
    comboBox->addItem (TRANS("Volume"), 3);
    comboBox->addItem (TRANS("Pan"), 4);
    comboBox->addListener (this);

    addAndMakeVisible (comboBox2 = new ComboBox ("new combo box"));
    comboBox2->setEditableText (false);
    comboBox2->setJustificationType (Justification::centredLeft);
    comboBox2->setTextWhenNothingSelected (String::empty);
    comboBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox2->addListener (this);

    addAndMakeVisible (comboBox3 = new ComboBox ("new combo box"));
    comboBox3->setEditableText (false);
    comboBox3->setJustificationType (Justification::centredLeft);
    comboBox3->setTextWhenNothingSelected (String::empty);
    comboBox3->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox3->addListener (this);

    addAndMakeVisible (comboBox4 = new ComboBox ("new combo box"));
    comboBox4->setEditableText (false);
    comboBox4->setJustificationType (Justification::centredLeft);
    comboBox4->setTextWhenNothingSelected (String::empty);
    comboBox4->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox4->addListener (this);

    addAndMakeVisible (comboBox5 = new ComboBox ("new combo box"));
    comboBox5->setEditableText (false);
    comboBox5->setJustificationType (Justification::centredLeft);
    comboBox5->setTextWhenNothingSelected (String::empty);
    comboBox5->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox5->addListener (this);

    addAndMakeVisible (comboBox6 = new ComboBox ("new combo box"));
    comboBox6->setEditableText (false);
    comboBox6->setJustificationType (Justification::centredLeft);
    comboBox6->setTextWhenNothingSelected (String::empty);
    comboBox6->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox6->addListener (this);

    addAndMakeVisible (comboBox7 = new ComboBox ("new combo box"));
    comboBox7->setEditableText (false);
    comboBox7->setJustificationType (Justification::centredLeft);
    comboBox7->setTextWhenNothingSelected (String::empty);
    comboBox7->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox7->addListener (this);

    addAndMakeVisible (comboBox8 = new ComboBox ("new combo box"));
    comboBox8->setEditableText (false);
    comboBox8->setJustificationType (Justification::centredLeft);
    comboBox8->setTextWhenNothingSelected (String::empty);
    comboBox8->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox8->addListener (this);

    addAndMakeVisible (comboBox9 = new ComboBox ("new combo box"));
    comboBox9->setEditableText (false);
    comboBox9->setJustificationType (Justification::centredLeft);
    comboBox9->setTextWhenNothingSelected (String::empty);
    comboBox9->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox9->addListener (this);

    addAndMakeVisible (comboBox10 = new ComboBox ("new combo box"));
    comboBox10->setEditableText (false);
    comboBox10->setJustificationType (Justification::centredLeft);
    comboBox10->setTextWhenNothingSelected (String::empty);
    comboBox10->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox10->addListener (this);

    addAndMakeVisible (comboBox11 = new ComboBox ("new combo box"));
    comboBox11->setEditableText (false);
    comboBox11->setJustificationType (Justification::centredLeft);
    comboBox11->setTextWhenNothingSelected (String::empty);
    comboBox11->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox11->addListener (this);

    addAndMakeVisible (comboBox12 = new ComboBox ("new combo box"));
    comboBox12->setEditableText (false);
    comboBox12->setJustificationType (Justification::centredLeft);
    comboBox12->setTextWhenNothingSelected (String::empty);
    comboBox12->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox12->addListener (this);

    addAndMakeVisible (comboBox13 = new ComboBox ("new combo box"));
    comboBox13->setEditableText (false);
    comboBox13->setJustificationType (Justification::centredLeft);
    comboBox13->setTextWhenNothingSelected (String::empty);
    comboBox13->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox13->addListener (this);

    addAndMakeVisible (comboBox14 = new ComboBox ("new combo box"));
    comboBox14->setEditableText (false);
    comboBox14->setJustificationType (Justification::centredLeft);
    comboBox14->setTextWhenNothingSelected (String::empty);
    comboBox14->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox14->addListener (this);

    addAndMakeVisible (comboBox15 = new ComboBox ("new combo box"));
    comboBox15->setEditableText (false);
    comboBox15->setJustificationType (Justification::centredLeft);
    comboBox15->setTextWhenNothingSelected (String::empty);
    comboBox15->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox15->addListener (this);

    addAndMakeVisible (comboBox16 = new ComboBox ("new combo box"));
    comboBox16->setEditableText (false);
    comboBox16->setJustificationType (Justification::centredLeft);
    comboBox16->setTextWhenNothingSelected (String::empty);
    comboBox16->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    comboBox16->addListener (this);

    addAndMakeVisible (imageButton = new ImageButton ("new button"));
    imageButton->addListener (this);

    imageButton->setImages (false, true, true,
                            ImageCache::getFromMemory (gtk_refresh_png, gtk_refresh_pngSize), 1.000f, Colour (0x00000000),
                            Image(), 1.000f, Colour (0x00000000),
                            Image(), 1.000f, Colour (0x00000000));

    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..
    midiDev->addItemList(MidiOutput::getDevices(),1);
    //[/Constructor]
}

Gui::~Gui()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    textButton = nullptr;
    midiDev = nullptr;
    textEditor = nullptr;
    textButton2 = nullptr;
    textButton3 = nullptr;
    comboBox = nullptr;
    comboBox2 = nullptr;
    comboBox3 = nullptr;
    comboBox4 = nullptr;
    comboBox5 = nullptr;
    comboBox6 = nullptr;
    comboBox7 = nullptr;
    comboBox8 = nullptr;
    comboBox9 = nullptr;
    comboBox10 = nullptr;
    comboBox11 = nullptr;
    comboBox12 = nullptr;
    comboBox13 = nullptr;
    comboBox14 = nullptr;
    comboBox15 = nullptr;
    comboBox16 = nullptr;
    imageButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void Gui::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::white);

    g.setColour (Colour (0xda090a09));
    g.fillRect (4, 4, 600, 400);

    g.setColour (Colour (0xffcdcdcd));
    g.drawRoundedRectangle (7.0f, 7.0f, 590.0f, 54.0f, 10.000f, 5.000f);

    g.setColour (Colours::white);
    g.setFont (Font (41.20f, Font::bold));
    g.drawText (TRANS("Apc40 / Apc20 Mode Control"),
                4, 4, 600, 50,
                Justification::centred, true);

    g.setColour (Colour (0xff9a9a9a));
    g.fillRoundedRectangle (204.0f, 68.0f, 396.0f, 332.0f, 10.000f);

    g.setColour (Colour (0x827b4108));
    g.fillRoundedRectangle (4.0f, 68.0f, 196.0f, 332.0f, 10.000f);

    g.setColour (Colour (0xffdcd5d5));
    g.setFont (Font (19.60f, Font::bold));
    g.drawText (TRANS("Select APC from list"),
                4, 76, 200, 30,
                Justification::centred, true);

    g.setColour (Colour (0xfffdfdfd));
    g.setFont (Font (19.60f, Font::bold));
    g.drawText (TRANS("APC 40 Led Rings Control"),
                204, 76, 396, 36,
                Justification::centred, true);

    g.setColour (Colour (0xff494848));
    g.drawRoundedRectangle (207.0f, 295.0f, 390.0f, 100.0f, 10.000f, 5.000f);

    g.setColour (Colour (0xff494848));
    g.drawRoundedRectangle (207.0f, 151.0f, 390.0f, 100.0f, 10.000f, 5.000f);

    g.setColour (Colours::black);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("Track Control"),
                208, 124, 392, 30,
                Justification::centred, true);

    g.setColour (Colours::black);
    g.setFont (Font (15.00f, Font::plain));
    g.drawText (TRANS("Device Control"),
                208, 268, 392, 30,
                Justification::centred, true);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void Gui::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    textButton->setBounds (16, 243, 168, 40);
    midiDev->setBounds (16, 112, 150, 24);
    textEditor->setBounds (88, 440, 456, 80);
    textButton2->setBounds (16, 168, 168, 40);
    textButton3->setBounds (16, 320, 166, 40);
    comboBox->setBounds (216, 168, 80, 24);
    comboBox2->setBounds (312, 168, 80, 24);
    comboBox3->setBounds (408, 168, 80, 24);
    comboBox4->setBounds (512, 168, 80, 24);
    comboBox5->setBounds (216, 216, 80, 24);
    comboBox6->setBounds (312, 216, 80, 24);
    comboBox7->setBounds (408, 216, 80, 24);
    comboBox8->setBounds (512, 216, 80, 24);
    comboBox9->setBounds (216, 312, 80, 24);
    comboBox10->setBounds (312, 312, 80, 24);
    comboBox11->setBounds (416, 312, 80, 24);
    comboBox12->setBounds (512, 312, 80, 24);
    comboBox13->setBounds (216, 360, 80, 24);
    comboBox14->setBounds (312, 360, 80, 24);
    comboBox15->setBounds (416, 360, 80, 24);
    comboBox16->setBounds (512, 360, 80, 24);
    imageButton->setBounds (170, 112, 24, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void Gui::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == textButton)
    {
        //[UserButtonCode_textButton] -- add your button handler code here..
		if (midiDev->getText() == "Akai APC20")
		{

			uint8 sysexdata[10] = { 0x47, 0x00, 0x7B, 0x60, 0x00, 0x04, 0x41, 0x09, 0x01, 0x08 };
			MidiMessage mensaje = MidiMessage::createSysExMessage(sysexdata, 10);
			salida->sendMessageNow(mensaje);

		}

		if (midiDev->getText() == "Akai APC40")
		{
			uint8 sysexdata2[10] = { 0x47, 0x00, 0x73, 0x60, 0x00, 0x04, 0x41, 0x09, 0x01, 0x08 };
			MidiMessage mensaje = MidiMessage::createSysExMessage(sysexdata2, 10);
			salida->sendMessageNow(mensaje);
		}

/* ----------------------check sysex message in texteditor-----------------
		String midiData;
		midiData = String::toHexString(mensaje.getRawData(), mensaje.getRawDataSize());
		textEditor->setText(midiData);
-----------------------------------------------------------*/
        //[/UserButtonCode_textButton]
    }
    else if (buttonThatWasClicked == textButton2)
    {
        //[UserButtonCode_textButton2] -- add your button handler code here..
		if (midiDev->getText() == "Akai APC20")
		{
			uint8 sysexdata[10] = { 0x47, 0x00, 0x7B, 0x60, 0x00, 0x04, 0x40, 0x09, 0x01, 0x08 };
			MidiMessage mensaje = MidiMessage::createSysExMessage(sysexdata, 10);
			salida->sendMessageNow(mensaje);
		}

		if (midiDev->getText() == "Akai APC40")
		{
			uint8 sysexdata2[10] = { 0x47, 0x00, 0x73, 0x60, 0x00, 0x04, 0x40, 0x09, 0x01, 0x08 };
			MidiMessage mensaje = MidiMessage::createSysExMessage(sysexdata2, 10);
			salida->sendMessageNow(mensaje);
			comboBox->setText(" ");
			comboBox2->setText(" ");
			comboBox3->setText(" ");
			comboBox4->setText(" ");
			comboBox5->setText(" ");
			comboBox6->setText(" ");
			comboBox7->setText(" ");
			comboBox8->setText(" ");
			comboBox9->setText(" ");
			comboBox10->setText(" ");
			comboBox11->setText(" ");
			comboBox12->setText(" ");
			comboBox13->setText(" ");
			comboBox14->setText(" ");
			comboBox15->setText(" ");
			comboBox16->setText(" ");
		}

        //[/UserButtonCode_textButton2]
    }
    else if (buttonThatWasClicked == textButton3)
    {
        //[UserButtonCode_textButton3] -- add your button handler code here..
		if (midiDev->getText() == "Akai APC20")
		{
			uint8 sysexdata[10] = { 0x47, 0x00, 0x7B, 0x60, 0x00, 0x04, 0x42, 0x09, 0x01, 0x08 };
			MidiMessage mensaje = MidiMessage::createSysExMessage(sysexdata, 10);
			salida->sendMessageNow(mensaje);
		}

		if (midiDev->getText() == "Akai APC40")
		{
			uint8 sysexdata2[10] = { 0x47, 0x00, 0x73, 0x60, 0x00, 0x04, 0x42, 0x09, 0x01, 0x08 };
			MidiMessage mensaje = MidiMessage::createSysExMessage(sysexdata2, 10);
			salida->sendMessageNow(mensaje);
		}
        //[/UserButtonCode_textButton3]
    }
    else if (buttonThatWasClicked == imageButton)
    {
        //[UserButtonCode_imageButton] -- add your button handler code here..
        midiDev->clear();
        midiDev->addItemList(MidiOutput::getDevices(),1);
        //[/UserButtonCode_imageButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void Gui::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == midiDev)
    {
        //[UserComboBoxCode_midiDev] -- add your combo box handling code here..
		salida = MidiOutput::openDevice(midiDev->getSelectedItemIndex());
/*-----------check id	tester----------
		int s = midiDev->getSelectedId();
		char buffer[33];
		textEditor->setText(itoa(s, buffer, 10));
-------------------------------------*/
        //[/UserComboBoxCode_midiDev]
    }
    else if (comboBoxThatHasChanged == comboBox)
    {
        //[UserComboBoxCode_comboBox] -- add your combo box handling code here..
        //[/UserComboBoxCode_comboBox]
    }
    else if (comboBoxThatHasChanged == comboBox2)
    {
        //[UserComboBoxCode_comboBox2] -- add your combo box handling code here..
		if (comboBox2->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x39, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox2->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x39, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox2->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x39, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox2->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x39, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox2]
    }
    else if (comboBoxThatHasChanged == comboBox3)
    {
        //[UserComboBoxCode_comboBox3] -- add your combo box handling code here..
		if (comboBox3->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x3a, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox3->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x3a, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox3->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x3a, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox3->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x3a, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox3]
    }
    else if (comboBoxThatHasChanged == comboBox4)
    {
        //[UserComboBoxCode_comboBox4] -- add your combo box handling code here..
		if (comboBox4->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x3b, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox4->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x3b, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox4->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x3b, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox4->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x3b, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox4]
    }
    else if (comboBoxThatHasChanged == comboBox5)
    {
        //[UserComboBoxCode_comboBox5] -- add your combo box handling code here..
		if (comboBox5->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x3c, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox5->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x3c, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox5->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x3c, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox5->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x3c, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox5]
    }
    else if (comboBoxThatHasChanged == comboBox6)
    {
        //[UserComboBoxCode_comboBox6] -- add your combo box handling code here..
		if (comboBox6->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x3d, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox6->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x3d, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox6->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x3d, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox6->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x3d, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox6]
    }
    else if (comboBoxThatHasChanged == comboBox7)
    {
        //[UserComboBoxCode_comboBox7] -- add your combo box handling code here..
		if (comboBox7->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x3e, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox7->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x3e, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox7->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x3e, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox7->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x3e, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox7]
    }
    else if (comboBoxThatHasChanged == comboBox8)
    {
        //[UserComboBoxCode_comboBox8] -- add your combo box handling code here..
		if (comboBox8->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x3f, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox8->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x3f, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox8->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x3f, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox8->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x3f, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox8]
    }
    else if (comboBoxThatHasChanged == comboBox9)
    {
        //[UserComboBoxCode_comboBox9] -- add your combo box handling code here..
		if (comboBox9->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x18, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox9->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x18, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox9->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x18, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox9->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x18, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox9]
    }
    else if (comboBoxThatHasChanged == comboBox10)
    {
        //[UserComboBoxCode_comboBox10] -- add your combo box handling code here..
		if (comboBox10->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x19, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox10->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x19, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox10->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x19, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox10->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x19, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox10]
    }
    else if (comboBoxThatHasChanged == comboBox11)
    {
        //[UserComboBoxCode_comboBox11] -- add your combo box handling code here..
		if (comboBox11->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x1a, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox11->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x1a, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox11->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x1a, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox11->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x1a, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox11]
    }
    else if (comboBoxThatHasChanged == comboBox12)
    {
        //[UserComboBoxCode_comboBox12] -- add your combo box handling code here..
		if (comboBox12->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x1b, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox12->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x1b, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox12->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x1b, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox12->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x1b, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox12]
    }
    else if (comboBoxThatHasChanged == comboBox13)
    {
        //[UserComboBoxCode_comboBox13] -- add your combo box handling code here..
		if (comboBox13->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x1c, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox13->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x1c, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox13->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x1c, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox13->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x1c, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox13]
    }
    else if (comboBoxThatHasChanged == comboBox14)
    {
        //[UserComboBoxCode_comboBox14] -- add your combo box handling code here..
		if (comboBox14->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x1d, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox14->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x1d, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox14->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x1d, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox14->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x1d, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox14]
    }
    else if (comboBoxThatHasChanged == comboBox15)
    {
        //[UserComboBoxCode_comboBox15] -- add your combo box handling code here..
		if (comboBox15->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x1e, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox15->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x1e, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox15->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x1e, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox15->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x1e, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox15]
    }
    else if (comboBoxThatHasChanged == comboBox16)
    {
        //[UserComboBoxCode_comboBox16] -- add your combo box handling code here..
		if (comboBox16->getSelectedId() == 1){
			uint8 led[3] = { 0xb0, 0x1f, 0x00 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox16->getSelectedId() == 2)
		{
			uint8 led[3] = { 0xb0, 0x1f, 0x01 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox16->getSelectedId() == 3)
		{
			uint8 led[3] = { 0xb0, 0x1f, 0x02 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
		else if (comboBox16->getSelectedId() == 4)
		{
			uint8 led[3] = { 0xb0, 0x1f, 0x03 };

			MidiMessage mensaje = MidiMessage::MidiMessage(led, 3);
			salida->sendMessageNow(mensaje);
		}
        //[/UserComboBoxCode_comboBox16]
    }

    //[UsercomboBoxChanged_Post]

	/*
*/
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...
//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Introjucer information section --

    This is where the Introjucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="Gui" componentName="" parentClasses="public Component"
                 constructorParams="" variableInitialisers="" snapPixels="8" snapActive="1"
                 snapShown="1" overlayOpacity="0.330" fixedSize="0" initialWidth="600"
                 initialHeight="400">
  <BACKGROUND backgroundColour="ffffffff">
    <RECT pos="4 4 600 400" fill="solid: da090a09" hasStroke="0"/>
    <ROUNDRECT pos="7 7 590 54" cornerSize="10" fill="solid: 2aa586" hasStroke="1"
               stroke="5, mitered, butt" strokeColour="solid: ffcdcdcd"/>
    <TEXT pos="4 4 600 50" fill="solid: ffffffff" hasStroke="0" text="Apc40 / Apc20 Mode Control"
          fontname="Default font" fontsize="41.200000000000003" bold="1"
          italic="0" justification="36"/>
    <ROUNDRECT pos="204 68 396 332" cornerSize="10" fill="solid: ff9a9a9a" hasStroke="0"/>
    <ROUNDRECT pos="4 68 196 332" cornerSize="10" fill="solid: 827b4108" hasStroke="0"/>
    <TEXT pos="4 76 200 30" fill="solid: ffdcd5d5" hasStroke="0" text="Select APC from list"
          fontname="Default font" fontsize="19.600000000000001" bold="1"
          italic="0" justification="36"/>
    <TEXT pos="204 76 396 36" fill="solid: fffdfdfd" hasStroke="0" text="APC 40 Led Rings Control"
          fontname="Default font" fontsize="19.600000000000001" bold="1"
          italic="0" justification="36"/>
    <ROUNDRECT pos="207 295 390 100" cornerSize="10" fill="solid: ffffff" hasStroke="1"
               stroke="5, mitered, butt" strokeColour="solid: ff494848"/>
    <ROUNDRECT pos="207 151 390 100" cornerSize="10" fill="solid: ffffff" hasStroke="1"
               stroke="5, mitered, butt" strokeColour="solid: ff494848"/>
    <TEXT pos="208 124 392 30" fill="solid: ff000000" hasStroke="0" text="Track Control"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
    <TEXT pos="208 268 392 30" fill="solid: ff000000" hasStroke="0" text="Device Control"
          fontname="Default font" fontsize="15" bold="0" italic="0" justification="36"/>
  </BACKGROUND>
  <TEXTBUTTON name="usermode" id="a39b1264ed901917" memberName="textButton"
              virtualName="" explicitFocusOrder="0" pos="16 243 168 40" buttonText="Ableton Mode"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="d63c70e0bcaa8845" memberName="midiDev"
            virtualName="" explicitFocusOrder="0" pos="16 112 150 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTEDITOR name="new text editor" id="7ed636f41dba8c7f" memberName="textEditor"
              virtualName="" explicitFocusOrder="0" pos="88 440 456 80" initialText=""
              multiline="1" retKeyStartsLine="1" readonly="0" scrollbars="1"
              caret="1" popupmenu="1"/>
  <TEXTBUTTON name="new button" id="2c00dbfb6ae15cd7" memberName="textButton2"
              virtualName="" explicitFocusOrder="0" pos="16 168 168 40" buttonText="Generic Mode"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="new button" id="7f059c795e8e5715" memberName="textButton3"
              virtualName="" explicitFocusOrder="0" pos="16 320 166 40" buttonText="Ableton Alternative"
              connectedEdges="0" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="a7f25fe9dfe7bc98" memberName="comboBox"
            virtualName="" explicitFocusOrder="0" pos="216 168 80 24" editable="0"
            layout="33" items="Off&#10;Single&#10;Volume&#10;Pan" textWhenNonSelected=""
            textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="f1a080ce63271473" memberName="comboBox2"
            virtualName="" explicitFocusOrder="0" pos="312 168 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="968e755ca86635dd" memberName="comboBox3"
            virtualName="" explicitFocusOrder="0" pos="408 168 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="787f0d337da5f85e" memberName="comboBox4"
            virtualName="" explicitFocusOrder="0" pos="512 168 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="c910fc4e691b7d0e" memberName="comboBox5"
            virtualName="" explicitFocusOrder="0" pos="216 216 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="adfe004490555f3" memberName="comboBox6"
            virtualName="" explicitFocusOrder="0" pos="312 216 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="cb2e5268c6b19f93" memberName="comboBox7"
            virtualName="" explicitFocusOrder="0" pos="408 216 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="e4934ff26ed39fca" memberName="comboBox8"
            virtualName="" explicitFocusOrder="0" pos="512 216 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="f965d35eed93fdde" memberName="comboBox9"
            virtualName="" explicitFocusOrder="0" pos="216 312 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="4aebcbd4ffe3e7d0" memberName="comboBox10"
            virtualName="" explicitFocusOrder="0" pos="312 312 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="7affd148cb4cb8f4" memberName="comboBox11"
            virtualName="" explicitFocusOrder="0" pos="416 312 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="63333b232efaf5c3" memberName="comboBox12"
            virtualName="" explicitFocusOrder="0" pos="512 312 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="24a87d220d5cb0f0" memberName="comboBox13"
            virtualName="" explicitFocusOrder="0" pos="216 360 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="313bee7ea298adb8" memberName="comboBox14"
            virtualName="" explicitFocusOrder="0" pos="312 360 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="ff4f5f4d6aa4d37e" memberName="comboBox15"
            virtualName="" explicitFocusOrder="0" pos="416 360 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <COMBOBOX name="new combo box" id="afef20286717c696" memberName="comboBox16"
            virtualName="" explicitFocusOrder="0" pos="512 360 80 24" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <IMAGEBUTTON name="new button" id="e110a94d388c56c4" memberName="imageButton"
               virtualName="" explicitFocusOrder="0" pos="170 112 24 24" buttonText="new button"
               connectedEdges="0" needsCallback="1" radioGroupId="0" keepProportions="1"
               resourceNormal="gtk_refresh_png" opacityNormal="1" colourNormal="0"
               resourceOver="" opacityOver="1" colourOver="0" resourceDown=""
               opacityDown="1" colourDown="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif

//==============================================================================
// Binary resources - be careful not to edit any of these sections!

// JUCER_RESOURCE: gtk_refresh_png, 1047, "gtk_refresh.png"
static const unsigned char resource_Gui_gtk_refresh_png[] = { 137,80,78,71,13,10,26,10,0,0,0,13,73,72,68,82,0,0,0,24,0,0,0,24,8,3,0,0,0,215,169,205,202,0,0,1,203,80,76,84,69,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,13,17,12,23,33,22,
35,50,62,40,57,38,48,67,83,64,90,113,66,93,115,67,94,116,67,95,118,69,97,120,71,100,124,72,101,125,76,107,133,78,110,137,79,111,138,80,113,141,83,116,144,83,117,146,88,123,153,89,125,156,90,126,157,91,
127,158,91,128,160,92,129,161,93,130,162,94,131,163,96,132,163,97,133,164,98,134,165,99,135,166,101,136,166,102,137,167,103,138,168,107,141,170,108,142,171,110,143,171,112,145,173,113,146,174,115,147,
174,117,149,176,124,154,179,127,157,182,129,158,182,130,159,183,133,161,184,134,162,185,140,167,189,144,169,191,146,171,192,148,172,193,157,179,198,159,181,200,160,182,201,163,184,202,168,188,205,173,
192,208,176,194,209,177,195,210,180,197,211,183,200,214,185,201,214,188,204,217,191,206,218,196,210,221,197,211,222,199,211,222,200,212,223,201,213,224,202,214,225,204,215,225,205,216,226,206,217,227,
207,218,228,209,219,228,211,221,230,213,222,230,216,225,233,221,229,236,225,232,238,228,234,239,242,245,247,243,246,248,246,248,249,247,249,250,255,255,255,127,201,225,228,0,0,0,67,116,82,78,83,0,1,2,
3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,26,27,29,30,31,32,34,35,38,39,40,41,42,44,45,46,47,48,49,50,52,53,54,56,58,63,66,68,76,85,88,90,92,95,100,103,110,115,120,126,170,189,71,120,
191,36,0,0,0,1,98,75,71,68,152,118,209,6,62,0,0,1,171,73,68,65,84,40,207,109,146,87,91,19,65,20,134,103,135,97,11,9,81,72,97,17,99,204,170,4,105,162,116,17,21,63,80,81,145,38,161,132,172,75,136,210,17,
165,138,4,169,155,196,128,52,197,191,235,108,136,55,146,115,249,190,207,57,207,156,243,13,33,23,5,57,87,32,89,74,0,156,82,22,35,48,252,134,251,146,185,9,94,230,159,140,17,132,127,190,165,221,88,51,205,
120,252,87,218,52,2,165,18,181,120,107,199,188,133,19,201,212,57,55,20,83,65,84,43,220,248,96,164,241,143,131,159,71,223,224,18,109,88,124,7,63,111,109,122,190,102,46,132,195,186,49,30,237,70,101,137,
34,186,176,142,71,5,140,96,218,252,16,26,213,141,72,244,13,106,110,187,68,42,33,214,143,18,133,96,117,57,244,138,191,106,252,53,231,30,40,44,7,155,31,113,203,65,176,59,210,143,135,85,232,74,115,168,246,
90,196,102,80,90,64,176,51,136,167,101,94,224,30,231,41,104,15,240,117,99,26,1,46,62,79,160,214,235,128,166,121,16,63,229,51,99,91,235,99,105,209,51,135,114,143,104,87,93,216,62,57,59,57,62,220,255,62,
57,96,137,6,172,160,204,201,152,130,141,212,97,210,220,221,142,125,137,190,124,118,231,42,81,209,251,9,197,50,197,210,158,153,76,36,246,118,102,135,222,162,217,103,39,172,30,3,17,190,177,130,136,110,188,
215,195,161,225,62,180,5,138,68,34,200,117,192,19,175,141,111,172,15,7,131,131,189,157,104,171,240,218,249,177,104,158,234,247,23,201,84,114,99,36,104,5,240,248,238,141,43,204,58,47,149,242,29,50,37,130,
228,126,49,132,251,149,1,237,90,62,203,228,119,145,13,55,64,197,117,167,67,206,249,63,96,110,180,66,70,47,103,47,72,78,213,150,253,179,228,202,153,241,228,47,223,224,103,109,67,101,31,120,0,0,0,0,73,69,
78,68,174,66,96,130,0,0};

const char* Gui::gtk_refresh_png = (const char*) resource_Gui_gtk_refresh_png;
const int Gui::gtk_refresh_pngSize = 1047;


//[EndFile] You can add extra defines here...
//[/EndFile]
