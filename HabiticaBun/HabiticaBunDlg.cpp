
// HabiticaBunDlg.cpp : implementation file
//

#include "pch.h"
#include "framework.h"
#include "HabiticaBun.h"
#include "HabiticaBunDlg.h"
#include "afxdialogex.h"
//#include "Category.h"
#include <vector>
#include <Category.h>

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


// CHabiticaBunDlg dialog



CHabiticaBunDlg::CHabiticaBunDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_HABITICABUN_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CHabiticaBunDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Control(pDX, IDC_LIST1, list1);
	DDX_Control(pDX, IDC_EDIT1, inputUser);
}

BEGIN_MESSAGE_MAP(CHabiticaBunDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_LBN_SELCHANGE(IDC_LIST1, &CHabiticaBunDlg::OnLbnSelchangeList1)
	ON_EN_CHANGE(IDC_EDIT1, &CHabiticaBunDlg::OnEnChangeEdit1)
	ON_BN_CLICKED(IDC_BUTTON1, &CHabiticaBunDlg::OnBnClickedButton1)
END_MESSAGE_MAP()


// CHabiticaBunDlg message handlers

BOOL CHabiticaBunDlg::OnInitDialog()
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
	CString str("Tenis");
	list1.AddString(str);
	CString str2("Bauta");
	list1.AddString(str2);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CHabiticaBunDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CHabiticaBunDlg::OnPaint()
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
HCURSOR CHabiticaBunDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}



void CHabiticaBunDlg::OnLbnSelchangeList1()
{
	// TODO: Add your control notification handler code here
	
}


void CHabiticaBunDlg::OnEnChangeEdit1()
{
	// TODO:  If this is a RICHEDIT control, the control will not
	// send this notification unless you override the CDialogEx::OnInitDialog()
	// function and call CRichEditCtrl().SetEventMask()
	// with the ENM_CHANGE flag ORed into the mask.

	// TODO:  Add your control notification handler code here
	
/*
	// Dump every line of text of the edit control.
	for (i = 0; i < nLineCount; i++)
	{
		// length of line i:
		int len = inputUser.LineLength(inputUser.LineIndex(i));
		m_myEdit.GetLine(i, strText.GetBuffer(len), len);
		strText.ReleaseBuffer(len);
		strLine.Format(_T("line %d: '%s'\n"), i, strText);
		AFXDUMP(strLine);
	}
	*/
}


void CHabiticaBunDlg::OnBnClickedButton1()
{
	// TODO: Add your control notification handler code here
	int i, nLineCount = inputUser.GetLineCount();
	CString strText, strLine;

	int len = inputUser.LineLength(inputUser.LineIndex(0));
	inputUser.GetLine(0, strText.GetBuffer(len), len);
	strText.ReleaseBuffer(len);

	list1.AddString(strText);

	std::vector<Activity> act = { Activity("fotbal"), 
		                          Activity("basket") , 
		                          Activity("tenis") };
	Category cat = Category("sport", 100, act);
	list1.AddString(cat.getName().c_str());


}
