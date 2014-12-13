//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"

using namespace RecordTest;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=234238

MainPage::MainPage()
{
	InitializeComponent();
}

void RecordTest::MainPage::start(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	ToggleButton^ b = safe_cast<ToggleButton^>(sender);
	b->Content = "STOP";

	// TODO: 1. Start recording using the RealSense API
	// TODO: 2. Start moving `_datdot`, probably using the "Storyboarded Animation" stuff.
}

void RecordTest::MainPage::stop(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	ToggleButton^ b = safe_cast<ToggleButton^>(sender);
	b->Content = "START";
	// TODO: 1. Stop recording and save the file.
	// TODO: 2. Stop animating `_datdot` and place it back to its initial position.
}
