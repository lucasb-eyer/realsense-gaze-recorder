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
	// Put the UI into "recording" state.
	_startstopBtn->IsChecked = true;
	_startstopBtn->Content = "STOP";

	// TODO: 1. Start recording using the RealSense API

	// 2. Start moving `_datdot` using the "Storyboarded Animation" stuff.
	_storyboard->Begin();
}

void RecordTest::MainPage::stop(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
	// Put the UI into "not recording" state.
	_startstopBtn->IsChecked = false;
	_startstopBtn->Content = "START";

	// TODO: 1. Stop recording and save the file.

	// 2. Stop animating `_datdot` and place it back to its initial position.
	_storyboard->Stop();
}
