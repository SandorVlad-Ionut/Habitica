#pragma once


// Window2 dialog

class Window2 : public CDialogEx
{
	DECLARE_DYNAMIC(Window2)

public:
	Window2(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Window2();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedButton1();
};
