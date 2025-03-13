
// JimmyMFCDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "JimmyMFC.h"
#include "JimmyMFCDlg.h"
#include "afxdialogex.h"
#include <map>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CJimmyMFCDlg dialog



CJimmyMFCDlg::CJimmyMFCDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_JIMMYMFC_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CJimmyMFCDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CJimmyMFCDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CJimmyMFCDlg::OnBnClickedOk)
	ON_BN_CLICKED(IDC_BUTTON1, &CJimmyMFCDlg::OnBnClickedButton1)
	ON_BN_CLICKED(IDC_BUTTON2, &CJimmyMFCDlg::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_BUTTON3, &CJimmyMFCDlg::OnBnClickedButton3)
	ON_BN_CLICKED(IDC_BUTTON4, &CJimmyMFCDlg::OnBnClickedButton4)
	ON_BN_CLICKED(IDC_BUTTON5, &CJimmyMFCDlg::OnBnClickedButton5)
	ON_BN_CLICKED(IDC_BUTTON6, &CJimmyMFCDlg::OnBnClickedButton6)
	ON_BN_CLICKED(IDC_BUTTON7, &CJimmyMFCDlg::OnBnClickedButton7)
	ON_BN_CLICKED(IDC_BUTTON8, &CJimmyMFCDlg::OnBnClickedButton8)
	ON_BN_CLICKED(IDC_BUTTON9, &CJimmyMFCDlg::OnBnClickedButton9)
END_MESSAGE_MAP()


// CJimmyMFCDlg message handlers

BOOL CJimmyMFCDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != nullptr)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CJimmyMFCDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CJimmyMFCDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CJimmyMFCDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

void CJimmyMFCDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	//CDialogEx::OnOK();

	Reset();
}

void CJimmyMFCDlg::OnBnClickedButton1()
{
	HandleClick(GetDlgItem(IDC_BUTTON1));
}

void CJimmyMFCDlg::OnBnClickedButton2()
{
	HandleClick(GetDlgItem(IDC_BUTTON2));
}

void CJimmyMFCDlg::OnBnClickedButton3()
{
	HandleClick(GetDlgItem(IDC_BUTTON3));
}

void CJimmyMFCDlg::OnBnClickedButton4()
{
	HandleClick(GetDlgItem(IDC_BUTTON4));
}

void CJimmyMFCDlg::OnBnClickedButton5()
{
	HandleClick(GetDlgItem(IDC_BUTTON5));
}

void CJimmyMFCDlg::OnBnClickedButton6()
{
	HandleClick(GetDlgItem(IDC_BUTTON6));
}

void CJimmyMFCDlg::OnBnClickedButton7()
{
	HandleClick(GetDlgItem(IDC_BUTTON7));
}

void CJimmyMFCDlg::OnBnClickedButton8()
{
	HandleClick(GetDlgItem(IDC_BUTTON8));
}

void CJimmyMFCDlg::OnBnClickedButton9()
{
	HandleClick(GetDlgItem(IDC_BUTTON9));
}

void CJimmyMFCDlg::HandleClick(CWnd* button)
{
	if (game_over_)
		return;

	CString current_button_txt;
	button->GetWindowTextW(current_button_txt);

	if (current_button_txt == L"X" || current_button_txt == L"O")
		return;


	CString x_or_o = is_x_turn_ ? L"X" : L"O";
	button->SetWindowTextW(x_or_o);
	is_x_turn_ = !is_x_turn_;

	CString winner{ L"undefined" };
	if (CheckWin(winner))
	{
		GetDlgItem(IDC_STATIC2)->SetWindowTextW(winner + " Wins!!!");
		game_over_ = true;
	}
	else if (CheckDraw())
	{
		GetDlgItem(IDC_STATIC2)->SetWindowTextW(L"Draw. Game Over.");
		game_over_ = true;
	}
}

bool CJimmyMFCDlg::CheckWin(CString& winner)
{
	/* ways to win :
		- 3 in a row horizontally (boxes 123, 456, 789)
		- 3 in a row vertically (boxes 147, 258, 369)
		- 3 in a row diagonally (boxes 159, 357)
	*/

	// vals
	CString val1, val2, val3, val4, val5, val6, val7, val8, val9;

	// get vals
	GetDlgItem(IDC_BUTTON1)->GetWindowTextW(val1);
	GetDlgItem(IDC_BUTTON2)->GetWindowTextW(val2);
	GetDlgItem(IDC_BUTTON3)->GetWindowTextW(val3);
	GetDlgItem(IDC_BUTTON4)->GetWindowTextW(val4);
	GetDlgItem(IDC_BUTTON5)->GetWindowTextW(val5);
	GetDlgItem(IDC_BUTTON6)->GetWindowTextW(val6);
	GetDlgItem(IDC_BUTTON7)->GetWindowTextW(val7);
	GetDlgItem(IDC_BUTTON8)->GetWindowTextW(val8);
	GetDlgItem(IDC_BUTTON9)->GetWindowTextW(val9);

	//std::map<int, CString> board;
	//board[IDC_BUTTON1] = val1;
	//board[IDC_BUTTON2] = val2;
	//board[IDC_BUTTON3] = val3;
	//board[IDC_BUTTON4] = val4;
	//board[IDC_BUTTON5] = val5;
	//board[IDC_BUTTON6] = val6;
	//board[IDC_BUTTON7] = val7;
	//board[IDC_BUTTON8] = val8;
	//board[IDC_BUTTON9] = val9;

	if (val1 == val2 && val1 == val3 && val1 != L" ")
	{
		winner = val1;
		return true;
	}

	if (val4 == val5 && val4 == val6 && val4 != L" ")
	{
		winner = val4;
		return true;
	}

	if (val7 == val8 && val7 == val9 && val7 != L" ")
	{
		winner = val7;
		return true;
	}

	if (val1 == val4 && val1 == val7 && val1 != L" ")
	{
		winner = val1;
		return true;
	}

	if (val2 == val5 && val2 == val8 && val2 != L" ")
	{
		winner = val2;
		return true;
	}

	if (val3 == val6 && val3 == val9 && val3 != L" ")
	{
		winner = val3;
		return true;
	}

	if (val1 == val5 && val1 == val9 && val1 != L" ")
	{
		winner = val1;
		return true;
	}

	if (val3 == val5 && val3 == val7 && val3 != L" ")
	{
		winner = val3;
		return true;
	}

	return false;
}

void CJimmyMFCDlg::Reset()
{
	GetDlgItem(IDC_BUTTON1)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON2)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON3)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON4)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON5)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON6)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON7)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON8)->SetWindowTextW(L" ");
	GetDlgItem(IDC_BUTTON9)->SetWindowTextW(L" ");

	GetDlgItem(IDC_STATIC2)->SetWindowTextW(L"Good Luck!");

	game_over_ = false;
}

bool CJimmyMFCDlg::CheckDraw()
{
	// vals
	CString val1, val2, val3, val4, val5, val6, val7, val8, val9;

	// get vals
	GetDlgItem(IDC_BUTTON1)->GetWindowTextW(val1);
	GetDlgItem(IDC_BUTTON2)->GetWindowTextW(val2);
	GetDlgItem(IDC_BUTTON3)->GetWindowTextW(val3);
	GetDlgItem(IDC_BUTTON4)->GetWindowTextW(val4);
	GetDlgItem(IDC_BUTTON5)->GetWindowTextW(val5);
	GetDlgItem(IDC_BUTTON6)->GetWindowTextW(val6);
	GetDlgItem(IDC_BUTTON7)->GetWindowTextW(val7);
	GetDlgItem(IDC_BUTTON8)->GetWindowTextW(val8);
	GetDlgItem(IDC_BUTTON9)->GetWindowTextW(val9);

	if (val1 != L" "
		&& val2 != L" "
		&& val3 != L" "
		&& val4 != L" "
		&& val5 != L" "
		&& val6 != L" "
		&& val7 != L" "
		&& val8 != L" "
		&& val9 != L" ")
		return true;

	return false;
}
