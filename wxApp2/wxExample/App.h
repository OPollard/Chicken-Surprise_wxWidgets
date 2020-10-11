#pragma once

#include <wx/wxprec.h>
#ifndef WX_WXPRECOMP
#include <wx/wx.h>
#endif // !WX_WXPRECOMP


class App : public wxApp
{
public:
	App();

	bool OnInit();

	~App();
};

DECLARE_APP(App); //wxGetApp();
