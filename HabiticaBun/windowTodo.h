#pragma once


// windowTodo dialog

class windowTodo : public CDialogEx
{
	DECLARE_DYNAMIC(windowTodo)

public:
	windowTodo(CWnd* pParent = nullptr);   // standard constructor
	virtual ~windowTodo();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

public:
	// test var
	CListBox testTODO;
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLbnSelchangeList1();
};
