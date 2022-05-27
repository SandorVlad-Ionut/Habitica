#pragma once


// windowActivities dialog

class windowActivities : public CDialogEx
{
	DECLARE_DYNAMIC(windowActivities)

public:
	windowActivities(CWnd* pParent = nullptr);   // standard constructor
	virtual ~windowActivities();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG3 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	
public:
	afx_msg void OnBnClickedButton1();
	afx_msg void OnBnClickedButton2();
	// lista de categorii predefinita	// lista de categorii predefinita
	//afx_msg void OnLbnSelchangeList1();
	CListBox activityList;
	CListBox categoryList;
	DECLARE_MESSAGE_MAP()
	afx_msg void OnLbnSelchangeList4();
	// var de test
	CListBox test;
	afx_msg void OnLbnSelchangeList1();
};
