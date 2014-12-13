//
// MainPage.xaml.h
// Declaration of the MainPage class.
//

#pragma once

#include "MainPage.g.h"

namespace RecordTest
{
	/// <summary>
	/// An empty page that can be used on its own or navigated to within a Frame.
	/// </summary>
	public ref class MainPage sealed
	{
	public:
		MainPage();

	private:
		void start(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
		void stop(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e);
	};
}
