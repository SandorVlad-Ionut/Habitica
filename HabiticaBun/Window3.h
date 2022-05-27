#pragma once


// Window3 dialog

class Window3 : public CDialogEx
{
	DECLARE_DYNAMIC(Window3)

public:
	Window3(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Window3();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG2 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
