#include "App.h"
#include "MainWindow.h"
#include "id.h"
#include <random>

//Main() is made here, and an instance of class App is created
IMPLEMENT_APP(App);

//constructor
App::App()
{}


//Initialiser
bool App::OnInit()
{
	
	//checks parent has done its initialising
	if (!wxApp::OnInit())
	{
		return false;
	}
	
	MainWindow* main = new MainWindow(nullptr, window::id::MAINWINDOW, _("Chicken Production"),
								wxDefaultPosition, wxGetDisplaySize());
	main->Show(true);

	return true;
}

//Destructor
App::~App()
{}