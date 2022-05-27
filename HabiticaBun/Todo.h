#pragma once


// Todo dialog

class Todo : public CDialogEx
{
	DECLARE_DYNAMIC(Todo)

public:
	Todo(CWnd* pParent = nullptr);   // standard constructor
	virtual ~Todo();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG4 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
};
