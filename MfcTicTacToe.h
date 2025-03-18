
// MfcTicTacToe.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CMfcTicTacToeApp:
// See MfcTicTacToe.cpp for the implementation of this class
//

class CMfcTicTacToeApp : public CWinApp
{
public:
	CMfcTicTacToeApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CMfcTicTacToeApp theApp;
